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
using namespace std;

// double lottery(int, int);
long int result(long int);
bool isPrime(long int);
bool isMultipleOfPrime(long int);

int main()
{
  int N = 500;
  result(N);
  return 0;
}

long int result(long int num)
{
  vector<long int> a;
  vector<long int> h;
  


  for (int j = 1; j < num; j++)
  {
    if(j <= 5)
    {
      h.push_back(j);
      h.push_back(j*2);
      h.push_back(j*3);
      h.push_back(j*5);
    } 
    
    if (j > 5 && isPrime(j) == false && isMultipleOfPrime(j) == false)
    {

      // cout << "Not Prime" << endl;
      h.push_back(j*2);
      h.push_back(j*3);
      h.push_back(j*5);
      // cout << "Iteration#" << j << endl;
      // cout << "2: " << j*2 << endl;
      // cout << "3: " << j*3 << endl;
      // cout << "5: " << j*5 << endl;
      // cout << endl << endl << endl;
    }

  }

  sort(h.begin(), h.end()); 

  // remove duplicates
  for (int n = 0; n < num; n++)
  {
    if(h[n] == h[n - 1])
    {
      // h.push_back(n - 1);
      // Deletes the Nth element 
      h.erase(h.begin() + (n - 1));

    }
    if(h[n] == h[n - 1])
    {
      // h.push_back(n - 1);
      // Deletes the Nth element 
      h.erase(h.begin() + (n - 1));

    }
    cout << "[" << n + 1 << "] = " << h[n] << endl;
  }

  
  return 0;
}


bool isPrime(long int i)
{
  int p, m = 0, isPrime = 0;
  // cout << "Prime Number: " << i << endl << endl;
  // cin >> n;
  
  if(i % 2 != 0)
  {
    m = i / 2;

  } else {

    m = i;

  }
  

  for (p = 2; p <= m; p++)
  {
    if (i % p == 0)
    {
      // cout << "Number is not Prime." << endl;
      isPrime = 1;
      break;
    }
  }

  if (isPrime == 0)
  {
    // cout << i << " <---: Number is Prime." << endl;
    return true;
  } else {
    return false;
  }
  
}

bool isMultipleOfPrime(long int dividend)
{
  long int divisor_two = 2, divisor_three = 3, divisor_five = 5;
  long int quotient_two, quotient_three, quotient_five;
  long int remainder_two, remainder_three, remainder_five;

  quotient_two = dividend / divisor_two;
  remainder_two = dividend % divisor_two;
  // cout << "Dividend is " << dividend <<endl;
  // cout << "Divisor is " << divisor_two <<endl;
  // cout << "Quotient is " << quotient_two << endl;
  // cout << "Remainder is " << remainder_two << endl;
  // cout << endl << endl << endl;
  

  quotient_three = dividend / divisor_three;
  remainder_three = dividend % divisor_three;
  // cout << "Dividend is " << dividend <<endl;
  // cout << "Divisor is " << divisor_three <<endl;
  // cout << "Quotient is " << quotient_three << endl;
  // cout << "Remainder is " << remainder_three << endl;
  // cout << endl << endl << endl;

  quotient_five = dividend / divisor_five;
  remainder_three = dividend % divisor_five;
  // cout << "Dividend is " << dividend <<endl;
  // cout << "Divisor is " << divisor_five <<endl;
  // cout << "Quotient is " << quotient_five << endl;
  // cout << "Remainder is " << remainder_three << endl;
  // cout << endl << endl << endl;

  
  if(isPrime(quotient_two) == true && quotient_two > 5)
  {
    // cout << dividend << "[!2]: Is a multiple of a prime number: " << endl;
    return true;
  } 


  else if (isPrime(quotient_three) == true && quotient_two > 5)
  {
    // cout << dividend << "[!3]: Is a multiple of a prime number: " << endl;
    return true;
  } 
  else if (isPrime(quotient_five) == true && quotient_two > 5)
  {
    // cout << dividend << "[!5]: Is a multiple of a prime number: " << endl;
    return true;
  } 
  else if (isPrime(dividend) == true && dividend > 5)
  {
    // cout << dividend << "[!dividend]: Is a multiple of a prime number: " << endl;
    return true;
  } 
  else if (quotient_two > 30 || quotient_three > 30 || quotient_five > 30) {

    if(remainder_two == 0)
    {
      // cout << quotient_two % divisor_three << endl;
      isMultipleOfPrime(quotient_two);
      return false;
    } 
    else if(remainder_three == 0)
    {
      isMultipleOfPrime(quotient_three);
      return false;
    }
    else if(remainder_five == 0)
    {
      isMultipleOfPrime(quotient_five);
      return false;
    }
    else 
    {
      cout << dividend << " Is Not further divisible by 2, 3 or 5" << endl;
      // isPrime(dividend);
      return true;
    }

  }
  else {
    
    cout << dividend << ": NOT PRIME NUMBER" << endl;
    return false;
  }
  return false;
}