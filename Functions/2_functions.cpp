#include <iostream>
#include <string>
using namespace std;


void welcome(); // function declaration 
bool isNumber(string);
void enterName();
double add(double a, double b) {return a + b;}
int main() 
{
    welcome(); // calling the function
    enterName();
   
}

void welcome() {
    cout << "Hello Welcome to my C++ App" << endl;
}

bool isNumber(string tmp)
{
    if (tmp[0] == '0')
        return false;
    for (int i = 0; i < tmp.length(); i++)
    {
        if(!(tmp[i] >= 48 && tmp[i] <= 57))
            return false;
            
    }
    return true;
}

void enterName()
{
    string tmp;

    cout << "Enter the number: " << endl;
    cin >> tmp;
   
    if(isNumber(tmp))
        cout << "Number entered properly " << endl;
    else 
        cout << "Number wasn't entered properly " << endl;
}