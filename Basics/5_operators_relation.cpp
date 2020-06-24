#include <iostream>
using namespace std;

int main (){
    int a = 10;
    int b = 5;

    cout << (a == b) << endl; // true (1) when both are equal
    cout << (a != b) << endl; // true (1) when both are NOT equal
    cout << (a > b) << endl; // true (1) when a is greater than b
    cout << (a < b) << endl; // true (1) when a is less than b
    cout << (a >= b) << endl; // true (1) when a is greater than OR equal to b
    cout << (a <= b) << endl; // true (1) when a is less than OR equal to b

    cout << !(a == b) << endl; // ! reverses the boolean
}