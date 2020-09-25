#include "Headers/comparison.h"
#include <iostream>
using namespace std;

Comparison::Comparison()
{
    // cout << "Start Comparison Constructor" << endl;
}

Comparison::~Comparison()
{
    // cout << endl
    //      << "Comparison Destructured" 
    //      << endl
    //      << endl;
}

bool Comparison::checkPoint(Point2D point, Rectangle rectangle)
{
    // RECTANGLE [0] = x1 | [1] = x2 | [2] = y1 | [3] = y2
    // POINT  [0] = x | [1] = y
    if (point.getPointX() >= rectangle.getX1position() 
    && point.getPointX() <= rectangle.getX2position() 
    && point.getPointY() >= rectangle.getY1position() 
    && point.getPointY() <= rectangle.getY2position())
    {
        cout << "!! Overlap !! The Point with coordinates X: "
             << point.getPointX() << ", Y: " << point.getPointY() << endl;
        cout << "is within the rectangle: "
             << "[X1: " << rectangle.getX1position()
             << "] [X2: " << rectangle.getX2position()
             << "] [Y1: " << rectangle.getY1position()
             << "] [Y2: " << rectangle.getY2position()
             << "] " << endl
             << endl;
        return true;
    } else {
        cout << "!! No Overlap !! The Point with coordinates X: "
             << point.getPointX() << ", Y: " << point.getPointY() << endl;
        cout << "is NOT within the rectangle: "
             << "[X1: " << rectangle.getX1position()
             << "] [X2: " << rectangle.getX2position()
             << "] [Y1: " << rectangle.getY1position()
             << "] [Y2: " << rectangle.getY2position()
             << "] " << endl
             << endl;
        return false;
    }
    return false;
}


bool Comparison::overlap(float a1, float a2, float a3, float a4)
{
    // SEARCH FOR WHAT WE DON'T WANT
    // 1. Rect[1]x1 is less than Rect[2]x1
    // 2. Rect[1]x2 is less than Rect[2]x1
    if (a1 < a3 && a2 < a3)
        return false;
    // 3. Rect[1]x1 is more than Rect[2]x2
    // 4. Rect[1]x2 is more than Rect[2]x2
    if (a1 > a4 && a2 > a4)
        return false;
    // After call the function again with Y.
    // If the above statements dont return false then we know for sure its overlapping
    return true;

}