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

long long int result(int nums);
vector<long long int> h;
bool isEqual(int lastA, int lastK);

int main()
{
  h.push_back(1);
  int nums = 1500;
  result(nums);
  return 0;
}

long long int result(int nums)
{
 
  long long int k;
  vector<long long int> a;

  for (int i = 1; a.size() < nums; i++)
  {

    k = h.back();
    h.pop_back();
    std::vector<long long int>::iterator it = std::find(a.begin(), a.end(), k);

    if (it == a.end())
    {
      a.push_back(k);
      long long int one = k * 2;
      long long int two = k * 3;
      long long int three = k * 5;
      long long int multiplier[4500] = {one, two, three};
      h.insert(h.end(), multiplier, multiplier + 3);
      sort(h.begin(), h.end(), greater<>());
    }

    // cout << "K Value: " << k << endl;

  }

  
  for(int j = 0; j < a.size(); j++)
  {
    cout << "[A " << j << "] => " << a[j] << endl;
    // cout << "[K " << j + 1 << "] => " << k[j] << endl;
    // cout << "[H " << j + 1 << "] => " << h[j] << endl;
    // cout << endl << endl;
  }
      return 0;
}