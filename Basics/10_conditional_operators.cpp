#include <iostream> // Input Output Stream
#include <string>
using namespace std; // Namespace is used to save a bunch of functions. I used std, which means standard


int main() 
{
    int a = 50;
    int b  = 30;

    // condition ? if its true : else
    string message = (a > b) ? "a > b" : "a <= b";
    cout << message << endl;

    cout << ((a > b ? a : b) + 10) << endl;

}