#include <iostream>

using namespace std;

int main()
{
    string name = "Agnes";

    cout << "Value of Variable: " << name << "Reference(Address) of Variable: " << &name << endl;

    // Reference variables have to be initialized when created. You have to give it a value.
    string &number_6 = name;

    cout << "Value of Variable: " << number_6 << "Reference(Address) of Variable: " << &number_6 << endl;

    number_6 = "new Name";

    cout << "Value of Variable: " << name << "Reference(Address) of Variable: " << &name << endl;
    cout << "Value of Variable: " << number_6 << "Reference(Address) of Variable: " << &number_6 << endl;


    return 0;
}