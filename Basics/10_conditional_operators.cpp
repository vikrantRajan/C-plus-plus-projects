#include <iostream> // Input Output Stream
#include <string>
using namespace std; // Namespace is used to save a bunch of functions. I used std, which means standard


int main() 
{
    int x = 50;

    switch (x) 
    {
        case 0:
            cout << "0 Appears";
            break; // <-- If you want the rest of cases to not occur then it will break here
        case 25:
            cout << "25 Appears";
            break;
        case 50:
            cout << "50 Appears";
            break;
        default:
            cout << "Nothing else worked out!";
    }


}