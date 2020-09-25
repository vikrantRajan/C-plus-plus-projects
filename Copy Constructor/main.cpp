#include <iostream>
#include "copy.cpp"
#include "Headers/copy.h"
using namespace std;

int main()
{
    // int a = 10;
    // int b = a;

    // a = 60;

    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    Test primaryPoint(10,4, 60, 30);
    Test secondPoint = primaryPoint;
    Test thirdPoint = primaryPoint;
    Test fourthPoint = primaryPoint;

    *(secondPoint.x1) = 200;
    *(secondPoint.y1) = 700; // this ends up changing primaryPoint.p & secondPoint.p cause its the address
    *(secondPoint.x2) = 70;
    *(secondPoint.y2) = 7;
    cout << endl;
    cout << "*primaryPoint.x1:  " << *secondPoint.x1 << endl;
    // cout << "primaryPoint.p:  " << primaryPoint.p << endl; // this gives the address cause in .h its written as *p
    cout << "*primaryPoint.y1:  " << *(secondPoint.y1) << endl;
    cout << "*primaryPoint.x2:  " << *(secondPoint.x2) << endl;
    cout << "*primaryPoint.y2:  " << *secondPoint.y2 << endl;
    cout << endl;

    secondPoint.check(*(secondPoint.x1), *(secondPoint.x2), *(secondPoint.y1), *(secondPoint.y2));
        // cout << "secondPoint.x:  " << secondPoint.x << endl;
        // // cout << "secondPoint.p:  " << secondPoint.p << endl; // this gives the address cause in .h its written as *p
        // cout << "*secondPoint.pointX:  " << *(secondPoint.pointX) << endl;
        // cout << "*secondPoint.pointY:  " << *(secondPoint.pointY) << endl;
        // cout << "secondPoint.y:  " << secondPoint.y << endl;

        return 0;
}