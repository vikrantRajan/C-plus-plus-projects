#include <iostream>
#include "Headers/people.h" // People class definition
#include "people.cpp" // People class methods
using namespace std;

void test()
{
    PersonalData *pointer = new PersonalData[5];

    delete []pointer;
}

int main()
{
    // creating instance of class
    PersonalData person(140);
    PersonalData person2;
    // person.setAge(50);
    person.setName("Jayhaan");
    person.setSurname("Katrack");
    person2.setAge(10);
    /* 
    - First we access people.cpp to run the function
    - Then we access people.h to get the function declaration
    */
    cout << person.getAge() << endl;
    cout << person.getName() << endl;
    cout << person.getSurname() << endl;
    cout << person2.getAge() << endl;

    test();

    return 0;
}