#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED
#include <iostream>
using namespace std;

class PersonalData
{
    // can't access this variable outside the class
    // Good practice to keep these variables private
private:
    string name;
    string surname;
    short age;
    int *p;

    // it becomes accessible outside class
public:
    PersonalData();
    PersonalData(short);
    ~PersonalData();
    // doing it this way, allows us to check values and prevents user from typing wrong value
    void setAge(int); // dont need to specify variable, this is a prototype of a function
    short getAge() { return age; } 
    void setName(string);
    string getName() { return name; }
    void setSurname(string);
    string getSurname() { return surname; }

    // gets the specified age of the object
    // short age;
};

#endif // PEOPLE_H_INCLUDED