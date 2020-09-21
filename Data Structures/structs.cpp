#include <iostream>
using namespace std;

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;

}a,b;

void test (personalData *);

int main()
{
    // create instance of struct (data structure) like an object
    personalData person[3];

    // a.age = 50;
    // cout << a.age << endl;

    // b.name = "Harold";
    // cout << b.name << endl;

    person[0].name = "Vikrant";
    person[0].surname = "Rajan";
    person[0].telephoneNumber = "1351351351";
    person[0].age = 22;

    // cout << person[0].name << endl;
    // cout << person[0].surname << endl;
    // cout << person[0].telephoneNumber << endl;
    // cout << person[0].age << endl;

    // cout << (*person).name << endl;

    cout << endl << endl;

    person[1].name = "New person";
    person[1].surname = "New surname";
    person[1].telephoneNumber = "1934193851";
    person[1].age = 12;

    // cout << (*(person+1)).name << endl;
    // cout << (*&person[1]).surname << endl;
    // cout << person->telephoneNumber << endl;
    // cout << (person+1)->telephoneNumber << endl;

    personalData *p = &person[0];
    cout << p->name << endl;

    test(p);

    cout << p->name << endl;
    
    // cout << person[1].name << endl;
    // cout << person[1].surname << endl;
    // cout << person[1].telephoneNumber << endl;
    // cout << person[1].age << endl;

    return 0;

}

void test (personalData *person)
{
    person->name = "Aries";
}