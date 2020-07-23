#include <iostream>
#include <string>
using namespace std;

// 2 same name, but because of the data types it helps save memory
int power(int, int);
double power(double, int);
int main() 
{
    cout << power(2.4,6) << endl;
    cout << power(2,6) << endl;
    // 2 ^ 1 = 2
    // 2 ^ 2 = 4
    // 2 ^ 3 = 8
    // 2 ^ 4 = 16
    // 2 ^ 5 = 32
    // 2 ^ 6 = 64
    return 0;
}


int power(int b, int e) 
{
    int tmp = b;
    int i = 0;

    while(i++ < e)
    {
        cout << tmp << " ^ " << i << " = " << b << endl;
        if(i != e)
            b *= tmp;

    }
    
    return b;
}

double power(double b, int e) 
{
    double tmp = b;
    int i = 0;

    while(i++ < e)
    {
        cout << tmp << " ^ " << i << " = " << b << endl;
        if(i != e)
            b *= tmp;

    }
    
    return b;
}