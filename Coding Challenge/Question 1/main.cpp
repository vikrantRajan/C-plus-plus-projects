// Specification:
// Design and Implement a C++ program that implements the following:
// • 2D Rectangle Class with floating point coordinates
// o Include methods for constructing an axis-aligned Rectangle with initial size and coordinates
// o Include a Copy constructor and an Assignment operator
// • Algorithm that checks whether or not a 2D point is contained in an axis-aligned Rectangle
// • Algorithm that checks whether or not two axis-aligned Rectangles intersect
// • Simple test code that creates instances of your class and tests your implementation
// Given:
// You can use this class in your implementation. Feel free to modify this class as well.

#include <iostream>
#include "Headers/rectangle.h" // Rectangle class prototype
#include "rectangle.cpp"       // Rectangle class methods
#include "Headers/point2D.h" // Point2D class prototype
#include "point2D.cpp"       // Point2D class methods
#include "Headers/comparison.h"
#include "comparison.cpp"

using namespace std;

int main ()
{
    Rectangle primaryRectangle;
    Point2D firstPoint;
    firstPoint.setPoint(4, 3);

    Comparison compare;
    compare.checkPoint(
        firstPoint.getPointX(), 
        firstPoint.getPointY(), 
        primaryRectangle.getX1position(), 
        primaryRectangle.getX2position(), 
        primaryRectangle.getY1position(), 
        primaryRectangle.getY2position()
    );

    // cout << primaryRectangle.getHeight() <<  endl;
    // cout << primaryRectangle.getWidth() << endl;
    // cout << primaryRectangle.getXposition() << endl;
    // cout << primaryRectangle.getYposition() << endl;
    return 0;
}