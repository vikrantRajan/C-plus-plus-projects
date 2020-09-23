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
#include "comparison.cpp" // Comparison methods
#include "Headers/comparison.h" // Comparison prototype
#include <vector>

using namespace std;

int main ()
{
    // Saving coordinates in a vector to use later
    vector<float> pointCoordinates;
    vector<float> rectangleCoordinates;
    vector<float> rectangleCoordinates2;

    // Rectangle automatically instantiates with
    // this->positionX = 0; this->positionY = 0; this->height = 10; this->width = 5;
    const Rectangle primaryRectangle(0,0,6,5.5);

    // Can create instance of axis alligned rectangles with (X, Y, Height, Width)
    Rectangle secondRectangle(3,2.1,2,4);
    Point2D firstPoint;
    // Point2D secondPoint = firstPoint;

    // You can move this around with (x, y)
    firstPoint.setPoint(4.99, 10.001);
    pointCoordinates = firstPoint.getPoints();
    rectangleCoordinates = primaryRectangle.getPosition();
    rectangleCoordinates2 = secondRectangle.getPosition();

    Comparison compare;
    compare.checkPoint(pointCoordinates,rectangleCoordinates);
    compare.checkRectangles(rectangleCoordinates2, rectangleCoordinates);
    return 0;
    }