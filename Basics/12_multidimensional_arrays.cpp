#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int multiArray[3][4] = {0}; // VARIABLE TYPE [NUMBER OF ARRAYS] [NUMBER OF ELEMENTS FOR EACH ARRAY]

    cout << multiArray[0][0] << endl;
    cout << multiArray[0][1] << endl;
    cout << multiArray[0][2] << endl;
    cout << multiArray[0][3] << endl;

    cout << &multiArray[0][0] << endl;
    cout << &multiArray[0][1] << endl;
    cout << &multiArray[0][2] << endl;
    cout << &multiArray[0][3] << endl;




}