#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // for one instruction {} is not required
    for(int i = 0; i < 5; i++) 
        cout << i << endl;
    

    // for multiple instructions {} is requireds
    int array[5];
    for (int i = 0; i < 4; i++)
    {

        array[i] = i;
        cout << array[i] << endl;
    }




}