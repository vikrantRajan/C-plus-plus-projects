#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int array[3]; // VARIABLE TYPE [SIZE OF ARRAY]

    array[0] = 10;
    array[1] = 14;
    array[2] = 15;

    cout << "array [0] = " << array[0] << ", address: " << &array[0] << endl;
    cout << "array [1] = " << array[1] << ", address: " << &array[1] << endl;
    cout << "array [2] = " << array[2] << ", address: " << &array[2] << endl;



}