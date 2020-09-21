#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED
#include <iostream>
using namespace std;

class Point2D
{
    private:
        float x;
        float y;
    public:
        void setPoint(float, float);
        float getPointX() { return x; }
        float getPointY() { return y; }
};

#endif // PEOPLE_H_INCLUDED