// Multiples of 2, 3, 5
// Consider a series in ascending order that only consists of numbers
// that can be factored by any combination
// of 2, 3 and 5. e.g. 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15....
// For example the numbers 7 (prime), 13 (prime)
// or 14 (2*7, 7 is not a valid factor), are not in the above
// series. They are not factorable by 2, 3, 5.
// The number 1 is included by definition.
// For example, the number in position 18 would be 30:
// 1. 1
// 2. 2
// 3. 3
// 4. 4 = 2*2
// 5. 5
// 6. 6 = 2*3
// 7. 8 = 2*2*2
// 8. 9 = 3*3
// 9. 10=2*5
// 10. 12=2*2*3
// 11. 15=3*5
// 12. 16=2*2*2*2
// 13. 18=2*3*3
// 14. 20=2*2*5
// 15. 24=2*2*2*3
// 16. 25=5*5
// 17. 27=3*3*3
// 18. 30=2*3*5

// Question:
// Design an algorithm to find the number that occupies position 1500 in this series. NOTE: the correct answer
// is 859963392, use this to verify your algorithm.
// Please be prepared to discuss your solution/solutions to this problem, as well as the steps you used to arrive
// at the solution.

// 2^x 3^y 5^z

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

long int result(int nums);
vector<long int> h;
bool isEqual(int lastA, int lastK);

int main()
{
  h.push_back(1);
  int nums = 1500;
  result(nums);
  return 0;
}

long int result(int nums)
{
 
  long int k;
  vector<long int> a;

  for (int i = 1; a.size() < nums; i++)
  {

    k = h.back();
    h.pop_back();
    std::vector<long int>::iterator it = std::find(a.begin(), a.end(), k);

    if (it == a.end())
    {
      a.push_back(k);
      long int one = k * 2;
      long int two = k * 3;
      long int three = k * 5;
      long int multiplier[4500] = {one, two, three};
      h.insert(h.end(), multiplier, multiplier + 3);
      sort(h.begin(), h.end(), greater<>());
    }
    // cout << "K Value: " << k << endl;
  }

  
  for(int j = 0; j < a.size(); j++)
  {
    cout << "[A " << j + 1 << "] => " << a[j] << endl;
    // cout << "[K " << j + 1 << "] => " << k[j] << endl;
    // cout << "[H " << j + 1 << "] => " << h[j] << endl;
    // cout << endl << endl;
  }

      return 0;
}

// BREAKING DOWN THE ABOVE CODE....

/* 

I am using 3 main variables:

1. vector<long int> a 
- This will be initialized as an empty array [index 0]
- It will hold the sorted data in ascending order 
- It will be looped over untill a.size() < 1500 (index starts on 0 till 1499)
- This will ensure that this will hold 1500 values

2. vector<long int> h
- This will be initialized with the value of 1 on index#0 
- It will hold only multiples of 2, 3 & 5 and its various permutations & combinations
- It will increase in size by 3 index-values on each loop
- The smallest value on each loop needs to be added to the end of vector<long int> a 
- This will ensure that vector<long int> a is sorted in ascending order
- Then that smallest value must be deleted from vector<long int> h the start of each loop

3. long int k
- This will temporarily hold the smallest value of h in each of the iterations
- Check if the current value of k exists in the last index-value of vector<long int> a
- If it does not exist: we run the multiplications 
- Add 3 new values to h (k*2, k*3, k*5), & add 1 new value to 'a'
- If the k = last value of 'a' nothing will be added 
- the size of 'a' will not increase, the loop will run again
- This prevents duplicate values being added to 'a'
- In order to prevent numbers like 7, 11, 13, 17, 19, 21 etc and other prime numbers
- long int k will be derived from smallest value of 'h' on each iteration 
- k will always be a multiple of 2,3 & 5 without any other prime number being involed at all
- These are numbers (k*2, k*3 & k*5) and then sorted in descending order
- Using k = h.back(), which gets the smallest number in 'h' 
- On the first iteration of the loop since k=1... 1*2,1*3,1*5 are the values that aren't there in 'a'
- so that means it will be added to 'a' and other numbers to 'h'


To sum it all up: 
1. multiplying 2, 3 & 5 on the first iteration allowed me to save those numbers 
2. then sort and use the smallest number in a temporary variable to check if it exists in 'a'
3. if it doesn't then we add it to 'a' untill a's size is what we specifiy creating a 'domino effect' of 2's, 3's & 5's
4. Repeat untill we get the amount of numbers we need

This achieves the requirements without including prime numbers & duplicate numbers 

*/
// Iteration # 1
/*
a[] = empty
h = [1]
k = [1] (We pop the value of  h[index# 1] into k); so int k = 1
h = [] (empty)

if (a[1] doesn't exist)
{
    add a = [1]
    add h = [1*2] = [2]
    add h = [1*3] = [2, 3]
    add h = [1*5] = [2, 3, 5]
    sort h = [5, 3, 2]
}

// Iteration # 2

a = [1]
h = [5, 3, 2]
k = [1, 2] (We pop last value of h into k);
h = [5, 3]

if (a[2] doesn't exist)
{
    add a = [2]
    add h = [2*2] = [5, 3, 4]
    add h = [2*3] = [5, 3, 4, 6]
    add h = [2*5] = [5, 3, 4, 6, 10]
    sort h = [10, 6, 5, 4, 3]
}

// Iteration # 3

a = [1, 2]
h = [10, 6, 5, 4, 3]
k = [1, 2, 3] (We pop last value of h into k);
h = [10, 6, 5, 4]

if (a[3] doesn't exist)
{
    add a = [3] = [1, 2, 3]
    add h = [3*2] = [10, 6, 5, 4, 6]
    add h = [3*3] = [10, 6, 5, 4, 6, 9]
    add h = [3*5] = [10, 6, 5, 4, 6, 9, 15]
    sort h = [15, 10, 9, 6, 6, 5, 4]
}


// Iteration # 4

a = [1, 2, 3]
h = [15, 10, 9, 6, 6, 5, 4]
k = [1, 2, 3, 4] (We pop last value of h into k);
h = [15, 10, 9, 6, 6, 5]

if (a[4] doesn't exist)
{
    add a = [4] = [1, 2, 3, 4]
    add h = [4*2] = [15, 10, 9, 6, 6, 5, 8]
    add h = [4*3] = [15, 10, 9, 6, 6, 5, 8, 12]
    add h = [4*5] = [15, 10, 9, 6, 6, 5, 8, 12, 20]
    sort h = [20, 15, 12, 10, 9, 8, 6, 6, 5]
}


// Iteration # 5

a = [1, 2, 3, 4]
h = [20, 15, 12, 10, 9, 8, 6, 6, 5]
k = [1, 2, 3, 4, 5] (We pop last value of h into k);
h = [20, 15, 12, 10, 9, 8, 6, 6]

if (a[5] doesn't exist)
{
    add a = [5] = [1, 2, 3, 4, 5]
    add h = [5*2] = [20, 15, 12, 10, 9, 8, 6, 6, 10]
    add h = [5*3] = [20, 15, 12, 10, 9, 8, 6, 6, 10, 15]
    add h = [5*5] = [20, 15, 12, 10, 9, 8, 6, 6, 10, 15, 25]
    sort h = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 6]
}


// Iteration # 6

a = [1, 2, 3, 4, 5]
h = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 6]
k = [1, 2, 3, 4, 5, 6] (We pop last value of h into k);
h = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6]

if (a[6] doesn't exist)
{
    add a = [6] = [1, 2, 3, 4, 5, 6]
    add h = [6*2] = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 12]
    add h = [6*3] = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 12, 18]
    add h = [6*5] = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 12, 18, 30]
    sort h = [30, 25, 20, 18, 15, 15, 12, 12 10, 10, 9, 8, 6]
}


// Iteration # 7

a = [1, 2, 3, 4, 5, 6]
h = [30, 25, 20, 18, 15, 15, 12, 12 10, 10, 9, 8, 6]
k = [1, 2, 3, 4, 5, 6, 6] (We pop last value of h into k);
h = [25, 20, 15, 15, 12, 10, 10, 9, 8]

if (a[6] doesn't exist)
!! 6 DOES EXIST so the loop doesn't run on the 7th iteration
By always checking if the last index of A = smallest value of H
and adding based on that we avoid putting any number that is not a multiple of 2,3 or 5!

as you can see the numbers in h are all multiples of 2,3 & 5
ONLY those numbers will be used to run a check with a,
which eventually adds those numbers to a, because it doesn't exist

*/