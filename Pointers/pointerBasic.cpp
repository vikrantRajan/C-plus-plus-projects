#include <iostream>

using namespace std;

int main()
{
    int var = 123;
    int a = 1;
    int * const p = &var; // this pointers address CAN change
    int * const p_const = &a; //this is a pointer that has to be initialized when defined, because it cannot change after defining the thing that it is pointing to (address)
    const int * p_2 = &a; //this is a pointer that cannot change the value that is under address its pointing to.
    const int * const p_3 = &a; //this is a pointer that cannot change the value that is under address its pointing to and also it cant change the address

    cout << &var << endl;
    
    cout << *&var << endl;

  
    // pointers "*variable_name" are ordinary variables that can store an address of a specific variable.
    // p = &var;

    cout << "p: " << *p << endl; // * is used to get the value of selected area in memory/address

    // this allows you to change the value of constants
    *p = 60;

    cout << "p: " << *p << endl;
    cout << "var: " << var << endl;
    cout << "a: " << a << endl;

  
    cout << endl << endl << endl;

    int ordinary_var = 10;

    int *ordinary_p = &ordinary_var;

    cout << "ordinary_var: " << ordinary_var << endl; //integer value
    cout << "&ordinary_var: " << &ordinary_var << endl; //integer value
    cout << "ordinary_p: " << ordinary_p << endl; //address
    cout << "*ordinary_p: " << *ordinary_p << endl; //integer value from pointed place (ordinary_var)
    cout << "&ordinary_p: " << &ordinary_p << endl; //address of pointer itself

    int ** p_pointing_to_address_of_pointer = &ordinary_p;

    cout << "p_pointing_to_address_of_pointer: " << p_pointing_to_address_of_pointer << endl;



    return 0;
}