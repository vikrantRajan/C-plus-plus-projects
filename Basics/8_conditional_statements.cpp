#include <iostream> // Input Output Stream
#include <string>
using namespace std; // Namespace is used to save a bunch of functions. I used std, which means standard


int main() 
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if(a > b)
    {
        cout << a << " > " << b << endl;
        cout << "A is a bigger number" << endl;
    } else if (a < b) {
        cout << "b is greater than a" << endl;
    } else {
        cout << "numbers are equal" << endl;
    }

}