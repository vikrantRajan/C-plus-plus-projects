#include <iostream>

using namespace std;

double swap(double, double);
double & swapMemoryReference(double &, double &); 

int main()
{
    system("cls");
    // I want to inverse the values of a <--> b
    double a;
    double b;

    cout << "ENTER A: " << endl;
    cin >> a;

    cout << "ENTER B: " << endl;
    cin >> b;
    cout << endl;
    double c = swap(a, b);

    cout << endl;
    double &d = swapMemoryReference(a, b);

    d = 200.3413;
    c = 100;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "Regular Swap" << endl;
    cout << "c: " << c << endl;
    cout << "Memory Swap" << endl;
    cout << "d: " << d << "  a: " << a << endl;

    return 0;
}

// 
double swap(double x, double y)
{
    // Create a temporary variable
    double t;

    t = x; // t = 10 ..... Saving 'a' so that the value of 'a' isn't lost 
    x = y; // a = 20 ... Now original a = copy b ... because we saved a^^ we can now make b = t
    y = t; // b = t = 10

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}

double & swapMemoryReference(double &x, double &y)
{
    // Create a temporary variable
    double t;

    t = x; 
    x = y; 
    y = t; 

    cout << "Memory Swap x: " << x << endl;
    cout << "Memory Swap y: " << y << endl;

    return x;
}