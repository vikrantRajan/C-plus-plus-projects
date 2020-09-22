#ifndef COMPARISON_H_INCLUDED
#define COMPARISON_H_INCLUDED
#include "rectangle.h"
#include "point2D.h"

class Comparison
{
    public:
        Comparison();
        ~Comparison();
        bool checkPoint(vector<float>, vector<float>);
        bool checkRectangles(vector<float>, vector<float>);
};

#endif // COMPARISON_H_INCLUDED