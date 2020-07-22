#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int j = 1341;
    int numOfDigits = 1;
    int tmp = j;

    cout << 1341 / 10 << endl; // = 134 (does not include decimals)
    cout << 134 / 10 << endl; // = 13 (does not include decimals)
    cout << 13 / 10 << endl; // = 1 (does not include decimals)
    cout << 1 / 10 << endl; // = 0 (does not include decimals)

    while(tmp /= 10) // i = i / 10
        numOfDigits++;

    cout << "the number " << j << " has " << numOfDigits << " digits " << endl;

    
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 1; k <= 10; k++)
        {
        cout.width(4);
        cout << i * k << " ";
        }
        cout << endl;
    }

    


}