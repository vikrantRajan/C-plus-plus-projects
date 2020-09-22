#include <iostream>
#include <string>
using namespace std;
#include "Headers/friend.h"
#include "friend.cpp"

int main()
{
   B objB;
   A objA;

   objA.setPrivateValue(objB, 1311);

   cout << objB.getPrivateValue() << endl;
   return 0;
}