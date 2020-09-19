#include <iostream>

using namespace std;

enum dayOfWeek {M = 1, TU, W, TH, FR, SA, SU};

string getDay(dayOfWeek);

int main ()
{

    int i;
    cout << "Enter Day of The Week" << endl;
    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;
    cout << "4. Thursday" << endl;
    cout << "5. Friday" << endl;
    cout << "6. Saturday" << endl;
    cout << "7. Sunday" << endl;
    
    cin >> i;
    // Can reference enum by index no...
    cout << getDay(dayOfWeek(i)) << endl;

    return 0;
}

// giving definition to the enum variables
string getDay(dayOfWeek d)
{
    switch(d)
    {
        case M:
            return "Monday";
        case TU:
            return "Tuesday";
        case W:
            return "Wednesday";
        case TH:
            return "Thursday";
        case FR:
            return "Friday";
        case SA:
            return "Saturday";
        case SU:
            return "Sunday";
        default:
            return "Wrong Input";
            

    }
}