#include "Headers/point2D.h"
#include <vector>

void Point2D::setPoint(float x, float y)
{
    this->x = x;
    this->y = y;
    this->points.push_back(x);
    this->points.push_back(y);
}
