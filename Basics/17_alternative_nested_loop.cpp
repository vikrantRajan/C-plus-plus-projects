#include <iostream>
#include <string>
using namespace std;

int main() 
{
    for (int i = 1, j = 1; i <= 10; i++) // amount of rows & length of column
    {
        cout.width(4);
        cout << i * j;

        // increase j everytime i = 10
        if (i == 10)
        {
            j++;
            i = 0;
            cout << endl;
        }

        // leaving the loop when j == 11
        if (j == 10 + 1)
            break;

    }

    

    


}