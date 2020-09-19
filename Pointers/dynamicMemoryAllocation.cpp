#include <iostream>

using namespace std;
/* dynamic allocation of memory */

int main()
{
   // int var = 41240;
  
    int amount;

    cout << "How many numbers would you like to store in an array? " << endl;
    cin >> amount;
    
    // cout << new int[amount] << endl;
    // ^^ this is bad because the memory used for this variable may not be free
    // specially if its a large number. 
    int *p = new (nothrow) int[amount];

    if (p != NULL)
    {
        for (int i = 0; i < amount; i++)
        {
            cout << "Enter the " << (i+1) << " number: " << endl;
            cin >> p[i];
        }

        for (int i = 0; i < amount; i++)
        {
            cout << "p [ " << i << " ] =  " << p[i] << endl;
        }
    }
    else
        cout << "Not enough memory " << endl;
       


    {
        // new int always gets created in a new random memory spot
        int *p = new int; // this reserves the same space of memory
        cout << p << endl;
        delete p; // If we dont delete, another space in memory gets allocated for the next line
        // Thats because the prev_new int still exists in memory, now we free that space
        // so the next new int, occupies that same spot.
        p = new int; // this reserves the same space of memory
        cout << p << endl;
        delete p;

    }


    //cout << "var: " << var << endl;


    delete []p;
    return 0;
}
