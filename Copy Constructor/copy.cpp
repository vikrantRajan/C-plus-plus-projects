#include <iostream>
#include "Headers/copy.h"
using namespace std;

Test::Test()
{
    // cause new int(value) takes up memory
    // to free up space we do this
}

Test::Test(float x1, float y1, float x2, float y2)
{
    this->x1 = new float(x1);
    this->y1 = new float(y1);
    this->x2 = new float(x2);
    this->y2 = new float(y2);
}

Test::~Test()
{
    // free up space because new float(value) takes up memory
    delete x1;
    delete y1;
    delete x2;
    delete y2;
}

Test::Test(const Test & obj)
{
    cout << "Copy Constructor" << endl;
    this->x1 = new float(*(obj.x1));
    this->y1 = new float(*(obj.y1));
    this->x2 = new float(*(obj.x2));
    this->y2 = new float(*(obj.y2));
}