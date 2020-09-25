#ifndef COMPARISON_H_INCLUDED
#define COMPARISON_H_INCLUDED
#include "rectangle.h"
#include "point2D.h"

class Comparison
{
    public: 
    Comparison();
    ~Comparison();
    bool checkPoint(Point2D, Rectangle);
    bool overlap(float,float,float,float);
};

#endif // COMPARISON_H_INCLUDED