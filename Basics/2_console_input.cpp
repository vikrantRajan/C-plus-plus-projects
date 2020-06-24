#include <iostream> // Input Output Stream
#include <string>
using namespace std; // Namespace is used to save a bunch of functions. I used std, which means standard


int main() 
{
    string name, surname;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Welcome " << name << " " << surname;
}