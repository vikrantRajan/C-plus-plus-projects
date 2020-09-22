#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

class Point2D
{
    // private
    float x;
    float y;
    vector<float> points;

    public:
        void setPoint(float, float);
        float getPointX() { return x; }
        float getPointY() { return y; }
        vector<float> getPoints() { return points; }
};

#endif // POINT2D_H_INCLUDED