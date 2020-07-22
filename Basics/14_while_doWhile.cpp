#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // EXAMPLE #1
    int i = 0;
    while(i < 10) 
    {
        cout << i << endl;
        i++;
    }

    // EXAMPLE #2
    int j = 0;
    while(++j < 10)
        cout << j << endl;


    // EXAMPLE 3
    int k = 10;
    while(--k) // runs until k = 0
        cout << k << endl;
        

    // EXAMPLE 4
    const int SizeOfArray = 30;
    int m = 0;
    int array[SizeOfArray];

    // while(m < SizeOfArray) 
    // {
    //     array[m] = 10 + m;
    //     cout << array[m++] << endl;
    // }

    // EXAMPLE 5

    do 
    {
        cout << "lala" << endl;

    } while(m);





}