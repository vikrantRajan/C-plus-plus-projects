#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;

void multiplyBy(int &, int);
int * pointerMultiplyBy(int *, int);
void multiplyByArray(int *, int, int);
int main()
{
    int a = 10;
    // multiplyBy(a, 5);
    // int *b = pointerMultiplyBy(&a, 5);
    // *b = 999;
    // cout << a << endl;
    // cout << b << endl;

    int array[10];
    cout << sizeof(array)/sizeof(array[0]) << endl;

    cout << "Element" << setw( 18 ) << "Value" << endl;

    

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        array[i] = i;
        cout << "array[" << i << "] = " << setw( 13 ) << array[i] << endl;
    }

    multiplyByArray(array, 5, sizeof(array)/sizeof(array[0]));

    return 0;
}

void multiplyBy(int & var, int amount)
{
    // void doesn't return anything..
    var *= amount; // multiply with amount
}


int * pointerMultiplyBy(int * var, int amount)
{
    *var = *var *amount; // multiply pointer with amount

    return var;
}

void multiplyByArray(int *array, int amount, int sizeOfArray) 
{
    

    // while(sizeOfArray--) // decrementing after each iteration
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        array[i] *= amount;
        cout << "array[" << i << "] = " << setw( 13 ) << array[i] << endl;
    }
}