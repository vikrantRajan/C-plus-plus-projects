#include <iostream>
using namespace std;

int main (){
    int a = 10;
    int b = 5;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;

    cout << a % b << endl; // remainder = 0 (in this example 10/5 = 2 with no remainder) after an integer division
    
    // int c = 1;
    // c += 1;
    // c /= 2;
    // c *= 2;
    // c %= 2;

    int d = 1;

    cout << d++ << endl; // POST incrementation
    cout << ++d << endl; // PRE incrementation

    cout << d-- << endl; // POST decrementation
    cout << --d << endl; // PRE decrementation
    return 0;

}