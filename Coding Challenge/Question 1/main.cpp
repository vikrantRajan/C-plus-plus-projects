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
#include "Headers/point2D.h" // Rectangle class prototype
#include "point2D.cpp"       // Rectangle class methods

using namespace std;

int main ()
{
    Rectangle primaryRectangle;
    Point2D firstPoint;
    firstPoint.setPoint(3, 3);
    
    // primaryRectangle.setXYposition(-10, -40);
    // primaryRectangle.setHeight(10);
    // primaryRectangle.setWidth(8);
    
    
    // cout << primaryRectangle.getHeight() <<  endl;
    // cout << primaryRectangle.getWidth() << endl;
    // cout << primaryRectangle.getXposition() << endl;
    // cout << primaryRectangle.getYposition() << endl;

    cout << "[LEFT] X1 POS: " << primaryRectangle.getX1position() << endl;
    cout << "[RIGHT] X2 POS: " << primaryRectangle.getX2position() << endl;
    cout << "[BOTTOM] Y1 POS: " << primaryRectangle.getY1position() << endl;
    cout << "[TOP] Y2 POS: " << primaryRectangle.getY2position() << endl;
}