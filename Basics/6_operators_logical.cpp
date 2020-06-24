#include <iostream>
using namespace std;

int main ()
{
    cout << (4 > 5 && 5 != 10) << endl; // Both expressions have to be true, else this becomes false
    cout << (7 > 5 || 5 != 10) << endl; // One of the expressions have to be true, then it becomes true
    return 0;
}