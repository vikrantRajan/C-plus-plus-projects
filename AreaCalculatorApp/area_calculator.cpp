#include <iostream>
#define PI 3.14
using namespace std;
/*validating data
    buffer - temporary array
*/
void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
bool isValid(string);
bool isValid(); // overloading function


int main()
{
    
    int choice;
    char cont;
    do
    {
        system("cls"); //clear screen = cls
        initMenu();

        // Make sure user doesn't type the wrong input
        // State has to be 0 in order for no errors with data types 
        // if state = 4, its no longer goodbit, something is messed up & cin stream gets jammed
        while(!(cin >> choice))
        {
            // cout << "state before: " << cin.rdstate() << endl;
            cin.clear();
            // cout << "state after: " << cin.rdstate() << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            system("cls");
            initMenu();
            cout << "You've just typed the wrong data. Try again... " << endl;
        }

        menuDecision(choice);

        do
        {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> cont; //asdfg
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while(cont != 'y' && cont != 'Y' && cont != 'N' && cont != 'n');
        // If user types anything that is not ^ then do the Question.

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

            do { cout << "Enter the radius: " << endl; cin >> r; } while(!isValid());
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square: " << endl;
            do { cin >> a; } while(!isValid("The data is wrong, please type it again:"));
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            do { cin >> a >> b; } while(!isValid("The data is wrong, please type it again:"));
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the base and height of a triangle: " << endl;
            do { cin >> a >> h; } while(!isValid("The data is wrong, please type it again:"));
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

    cout << "The area of a rectangle [Width: " << a << " Height: " << b << "] = " << result << endl;

    return result;
}
double areaTriangle(double a, double h)
{
    double result = (1/2.0) * a * h;

    cout << "The area of a triangle with [Base: " << a << " Height: " << h << "] = " << result << endl;

    return result;
}
bool isValid(string error_msg)
{
    if (cin.rdstate()) //state is wrong when it is not equal to 0
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
bool isValid()
{
    if (cin.rdstate()) //state is wrong when it is not equal to 0
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        return false;
    }

    return true;
}
