#include "Headers/user.h"

int User::counter = 0;
User::User()
{
    counter++;
    this->ID = counter;
}

User::~User()
{

}