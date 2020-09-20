#include <iostream>
using namespace std;

void lottery(int, int);

int main()
{
    // cout << time(NULL) << endl; // Time keeps changing
    // srand(403150); // seeds the random number
    srand(time(NULL));
    // int nr = rand();
    // cout << nr << endl;
    // nr = rand();
    // cout << nr << endl;
    // nr = rand();
    // cout << nr << endl;

    int lottery_nr = rand() % 49;

    lottery(49, 5);
    return 0;
}


void lottery(int total_numbers, int numbers_to_draw )
{
    if (total_numbers < numbers_to_draw)
        return;
    
    srand(time(NULL));

    int *balls = new int[numbers_to_draw];

    for (int i = 0; i < numbers_to_draw; i++)
    {
        balls[i] = rand() % 49;
        cout << balls[i] << endl;
    }

    delete[] balls;
}