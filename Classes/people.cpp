#include "Headers/people.h"
void PersonalData::setAge(int age)
{
    if (age < 0)
    {
        this->age = 0;
        // This points to the instance of the class people.h
    }
    else
    {
        this->age = age;
    }
}

void PersonalData::setName(string name)
{
    this->name = name;
}

void PersonalData::setSurname(string surname)
{
    this->surname = surname;
}

PersonalData::PersonalData()
{
    static int i = 0;
    cout << "[" << ++i << "] => The default constructor has just been invoked! " << endl;
    age = 500;

    p = new int[5];
}

PersonalData::PersonalData(short age)
{
    cout << "The other constructor has just been invoked! " << endl;
    this->age = age;
}

PersonalData::~PersonalData()
{
    // This is a place to free memory
    static int j = 0;
    cout << "[" << ++j << "] => The destructor has just been invoked! " << endl;

    delete [] p;
}