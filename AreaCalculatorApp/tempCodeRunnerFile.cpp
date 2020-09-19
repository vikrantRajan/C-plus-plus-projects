#include <iostream>
#define PI 3.14
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
bool isValid(string);

int main()
{
    int choice;
    char cont;
    do
    {
        system("cls"); //clear screen = cls
        initMenu();

        cin >> choice;

        while(!(cin >> choice))
        {
            // cout << "state before: " << cin.rdstate() << endl;
            cin.clear(); // incase user uses char instead of int
            // cout << "state after: " << cin.rdstate() << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
            initMenu();
            cout << "You've typed the wrong data to the input. Numbers only" << endl;
        }
        menuDecision(choice);

        do
        {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while(cont != 'y' && cont != 'Y' && cont != 'N' && cont != 'n');


    } while(cont == 'y' || cont == 'Y');

    return 0;
}
void initMenu()
{
    cout << "Enter option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}
void menuDecision(int choice)
{
    double r, a, b, h;
    switch(choice)
    {
        case 1:
            cout << "Enter the radius: " << endl;
            do { cin >> r; } while(!isValid("Wrong Input, Please Type Again"));
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square: " << endl;
            cin >> a;
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the base and height of a triangle: " << endl;
            cin >> a >> h;
            areaTriangle(a, h);
            break;
        default:
            cout << "You didn't choose any of the option from above" << endl;

    }
}
double areaCircle(double r)
{
    double result = PI * r * r;

    cout << "The area of a circle that radius is " << r << " = " << result << endl;

    return result;
}
double areaSquare(double a)
{
    double result = a * a;

    cout << "The area of a square that side is " << a << " = " << result << endl;

    return result;
}
double areaRectangle(double a, double b)
{
    double result = a * b;

    cout << "The area of a rectangle that first side is " << a << " the second side is " << b << " = " << result << endl;

    return result;
}
double areaTriangle(double a, double h)
{
    double result = (1/2.0) * a * h;

    cout << "The area of a rectangle that first side is " << a << " the second side is " << h << " = " << result << endl;

    return result;
}
bool isValid(string error_msg)
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        cout << error_msg << endl;
        return false;

    }

    return true;
}