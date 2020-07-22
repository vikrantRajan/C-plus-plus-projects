#include <iostream>
#include <string>
using namespace std;

int globalVariables;

int main() 
{
    // Block scopped variables
    int localVariables;

    cout << "Value of global: " << globalVariables << endl;
    cout << "Value of local: " << localVariables << endl;

    int a = 10;

    if (a == 10)
    {
        int localResult = a * 10;
        cout << localResult << endl; // result is not available outside the if block
    }

    int nr, globalResult = 0;
    int i = 0;
    for (; i < 3; i++)
    {
        cout << "Enter " << (i + 1) << " number" << endl;
        cin >> nr;
        globalResult += nr;
    }

    cout << globalResult << endl;
    cout << "we added " << i << " numbers" << endl;


}