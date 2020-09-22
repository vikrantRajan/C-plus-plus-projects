#include "Headers/point2D.h"
#include <vector>

Point2D::Point2D()
{
    cout << "Start Point2D Constructor" << endl;
    this->x = 5;
    this->y = 5;
}

Point2D::~Point2D()
{
    cout << "Point2D Destructured" << endl;
}

void Point2D::setPoint(float x, float y)
{
    this->x = x;
    this->y = y;
    this->points.push_back(x);
    this->points.push_back(y);
}
