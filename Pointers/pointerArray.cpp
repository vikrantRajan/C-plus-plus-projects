#include <iostream>

using namespace std;

int main()
{
    int a[3];
    a[0] = 0;
    a[1] = 20;
    a[2] = 40;
    short int zm;
    int * const p = &a[0]; // cant change the address of this variable

    cout << p << endl;
    cout << a << endl;

    cout << endl << endl << endl;

    cout << &a[0] << endl; // = cout << a << endl;
    cout << &a[1] << endl; // = cout << a + 1 << endl;
    cout << &a[2] << endl; // = cout << a + 2 << endl;

    cout << endl << endl << endl;

    cout << a << endl;
    cout << a + 1 << endl;
    cout << a + 2 << endl;

    cout << endl << endl << endl;

    cout << *a << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;

    cout << endl << endl << endl;

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;

   // cout << a++ << endl; // a++  a = a + 1 // We can't do this cause its a const * pointer

    int * p2 = &a[0];

    cout << *p2 << endl;  // 0
    cout << ++*p2 << endl; //1 // We are changing the value of index a[0] by 1
    cout << *++p2 << endl; //20 // We are moving to the next index then printing a[2]
    cout << *p2++ << endl; //20 // we are first printing the value a[2] then ++ moving to the next index of array a[3]
    cout << *p2 << endl; //40 // printing a[3] cause we moved up
    return 0;
}

