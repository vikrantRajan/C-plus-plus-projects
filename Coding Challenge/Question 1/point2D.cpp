#include "Headers/point2D.h"

Point2D::Point2D()
{
    // cout << "Start Point2D Constructor" << endl;
    this->x = 5;
    this->y = 5;
}

Point2D::Point2D(float x, float y)
{
    // cout << "Start Point2D Constructor" << endl;
    this->x = x;
    this->y = y;
}

Point2D::~Point2D()
{
    // cout << "Point2D Destructured" 
    //     << endl
    //     << endl;
}

void Point2D::setPoint(float x, float y)
{
    this->x = x;
    this->y = y;
    this->points.push_back(x);
    this->points.push_back(y);
}
