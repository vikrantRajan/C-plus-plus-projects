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
#include <deque>
using namespace std;

// double lottery(int, int);
int result(int);
bool isPrime(int);
bool isMultipleOfPrime(int);
int showdq(deque <int> g);

int showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main()
{
  int N = 10;
  result(N);
  return 0;
}

int result(int num)
{
  deque<int> a;
  deque<int> h;

  while (a.size() < num)
  {

      int k = h.pop_back();
      // h.erase(h.begin());
    
      // cout << "Not Prime" << endl;
      h.push_back(k);
      h.push_back(k*2);
      h.push_back(k*3);
      h.push_back(k*5);
      // cout << "Iteration#" << j << endl;
      // cout << "2: " << j*2 << endl;
      // cout << "3: " << j*3 << endl;
      // cout << "5: " << j*5 << endl;
      // cout << endl << endl << endl;
   
      sort(h.begin(), h.end()); 

  }
  return 0;
}
