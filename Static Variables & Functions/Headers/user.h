#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <iostream>
using namespace std;

class User
{
    // private
        static int counter;
        int ID;
    public:
        User();
        ~User();
        int getID() { return ID; }
        static int getCounter() { return counter; }
};

#endif // USER_H_INCLUDED