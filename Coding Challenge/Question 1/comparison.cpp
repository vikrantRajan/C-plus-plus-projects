// #include "Headers/point2D.h"
// #include "Headers/rectangle.h"
#include "Headers/comparison.h"
// #include "rectangle.cpp"
// #include "point2D.cpp"

bool Comparison::checkPoint(vector<float> point, vector<float> rectangle)
{
    // RECTANGLE [0] = x1 | [1] = x2 | [2] = y1 | [3] = y2
    // POINT  [0] = x | [1] = y
    if(point[0] >= rectangle[0] 
    && point[0] <= rectangle[1] 
    && point[1] >= rectangle[2] 
    && point[1] <= rectangle[3])
    {
        cout << "The Point with coordinates X: " 
        << point[0] << ", Y: " << point[1] << endl;
        cout << "is within the rectangle: "
             << "[X1: " << rectangle[0]
             << "] [X2: " << rectangle[1]
             << "] [Y1: " << rectangle[2]
             << "] [Y2: " << rectangle[3]
             << "] " << endl;
        return true;
    } else {
        cout << "The Point with coordinates X: "
             << point[0] << ", Y: " << point[1] << endl;
        cout << "is NOT in the rectangle: "
             << "[X1: " << rectangle[0]
             << "] [X2: " << rectangle[1]
             << "] [Y1: " << rectangle[2]
             << "] [Y2: " << rectangle[3]
             << "] " << endl
             << endl;
        return false;
    }

}

bool Comparison::checkRectangles(vector<float> rectangle1, vector<float> rectangle2)
{
    bool isIntersecting = false;
    bool checkBothRectangles = false;
    
    // divide the rectangle into 4 points
    // - 1. X1, Y1 (Bottom Left) [0],[2] --> first point
    // - 2. X2, Y1 (Bottom Right) [1], [2] --> second point
    // - 3. X1, Y2 (Top Left) [0,3] --> third point
    // - 4. X2, Y2 (Top Right) [1,3] --> fourth point
    // If any of these 4 points is within the rectangle it is overlapping.
    // isIntersecting = true; else it isn't intersecting
    // [0] = x1 | [1] = x2 | [2] = y1 | [3] = y2

    // Check if point X1, Y1 in rectangle2 is within rectangle1
    if (rectangle2[0] >= rectangle1[0] 
    && rectangle2[0] <= rectangle1[1] 
    && rectangle2[2] >= rectangle1[2] 
    && rectangle2[2] <= rectangle1[3])
    {
        cout << "[The Bottom Left Point in Rectangle 2 intersects] X1: "
             << rectangle2[0] << ", Y1: " << rectangle2[2] << endl;
        cout << "is within the rectangle1: "
             << "[X1: " << rectangle1[0]
             << "] [X2: " << rectangle1[1]
             << "] [Y1: " << rectangle1[2]
             << "] [Y2: " << rectangle1[3]
             << "] " << endl
             << endl;
        isIntersecting = true;
        return true;
    }

    // Check if point X2, Y1 in rectangle2 is within rectangle1
    if (rectangle2[1] >= rectangle1[0] 
    && rectangle2[1] <= rectangle1[1] 
    && rectangle2[2] >= rectangle1[2] 
    && rectangle2[2] <= rectangle1[3])
    {
        cout << "[The Bottom Right Point in Rectangle 2 intersects] X2: "
             << rectangle2[1] << ", Y1: " << rectangle2[2] << endl;
        cout << "is within the rectangle1: "
             << "[X1: " << rectangle1[0]
             << "] [X2: " << rectangle1[1]
             << "] [Y1: " << rectangle1[2]
             << "] [Y2: " << rectangle1[3]
             << "] " << endl
             << endl;
        isIntersecting = true;
        return true;
    }

    // Check if point X1, Y2 in rectangle2 is within rectangle1
    if (rectangle2[0] >= rectangle1[0] 
    && rectangle2[0] <= rectangle1[1] 
    && rectangle2[3] >= rectangle1[2] 
    && rectangle2[3] <= rectangle1[3])
    {
        cout << "[The Top Left Point in Rectangle 2 intersects] X1: "
             << rectangle2[0] << ", Y2: " << rectangle2[3] << endl;
        cout << "is within the rectangle1: "
             << "[X1: " << rectangle1[0]
             << "] [X2: " << rectangle1[1]
             << "] [Y1: " << rectangle1[2]
             << "] [Y2: " << rectangle1[3]
             << "] " << endl
             << endl;
        isIntersecting = true;
        return true;
    }

    // Check if point X2, Y2 in rectangle2 is within rectangle1
    if (rectangle2[1] >= rectangle1[0] 
    && rectangle2[1] <= rectangle1[1] 
    && rectangle2[3] >= rectangle1[2] 
    && rectangle2[3] <= rectangle1[3])
    {
        cout << "[The Top Right Point in Rectangle 2 intersects] X2: "
             << rectangle2[1] << ", Y2: " << rectangle2[3] << endl;
        cout << "is within the rectangle1: "
             << "[X1: " << rectangle1[0]
             << "] [X2: " << rectangle1[1]
             << "] [Y1: " << rectangle1[2]
             << "] [Y2: " << rectangle1[3]
             << "] " << endl
             << endl;
        isIntersecting = true;
        return true;
    }

    if(isIntersecting == false && checkBothRectangles == false)
    {
        this->checkRectangles(rectangle2, rectangle1);
        checkBothRectangles = true;
    } 
    // If none of the 4 points in rectangle2 are in the other then they don't intersect
    else if(isIntersecting == false && checkBothRectangles == true)
    {
       
        cout << "Rectangle 1 & Rectangle 2 DO NOT INTERSECT" << endl;
        cout << "Rectangle1: "
            << "[X1: " << rectangle1[0]
            << "] [X2: " << rectangle1[1]
            << "] [Y1: " << rectangle1[2]
            << "] [Y2: " << rectangle1[3]
            << "] "
            << "Rectangle2: "
            << "[X1: " << rectangle2[0]
            << "] [X2: " << rectangle2[1]
            << "] [Y1: " << rectangle2[2]
            << "] [Y2: " << rectangle2[3]
            << "] "
            << endl
            << endl;
        return false;

        
    } else {
        cout << "Something is wrong..." << endl; 
        return false;
    }
    return false;
}