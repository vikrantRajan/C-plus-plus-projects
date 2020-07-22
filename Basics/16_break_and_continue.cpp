#include <iostream>
#include <string>
using namespace std;

int main() 
{
    for (int i = 1; i <= 10; i++) // amount of rows & length of column
    {
        if (i == 5)
            continue; // All code after continue gets skipped in this block but loop continues 

        for (int k = 1; k <= 10; k++) // amount of columns & length of row
        {
        if (k == 8)
            break; // All code after continue gets skipped in this block and the loop stops 
        cout.width(4);
        cout << i * k << " ";
        }
        cout << endl;
    }

    

    


}