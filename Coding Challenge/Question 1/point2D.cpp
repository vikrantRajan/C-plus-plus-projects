#include "Headers/point2D.h"

Point2D::Point2D()
{
    // cout << "Start Point2D Constructor" << endl;
    this->x = new float(5);
    this->y = new float(5);
}

Point2D::Point2D(float x, float y)
{
    // cout << "Start Point2D Constructor" << endl;
    // this->x = x;
    // this->y = y;
    this->x = new float(x);
    this->y = new float(y);
}

Point2D::Point2D(const Point2D &obj)
{
    // cout << "Point Copy Constructor" << endl;
    this->x = new float(*(obj.x));
    this->y = new float(*(obj.y));
}

Point2D::~Point2D()
{
    // cout << "Point2D Destructured" 
    //     << endl
    //     << endl;
    // Free up space by deleting new floats
    delete x;
    delete y;
}


void Point2D::setPoint(float x, float y)
{
    this->x = new float(x);
    this->y = new float(y);
    this->points.push_back(x);
    this->points.push_back(y);
}
