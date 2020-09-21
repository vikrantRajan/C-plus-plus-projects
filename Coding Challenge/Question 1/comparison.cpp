// #include "Headers/point2D.h"
// #include "Headers/rectangle.h"
#include "Headers/comparison.h"
// #include "rectangle.cpp"
// #include "point2D.cpp"

bool Comparison::checkPoint(float pointX, float pointY, float rectangleX1, float rectangleX2, float rectangleY1, float rectangleY2)
{
    cout << "Point X: " << pointX << endl;
    cout << "Point Y: " << pointY << endl;
    cout << "[LEFT] X1 POS: " << rectangleX1 << endl;
    cout << "[RIGHT] X2 POS: " << rectangleX2 << endl;
    cout << "[BOTTOM] Y1 POS: " << rectangleY1 << endl;
    cout << "[TOP] Y2 POS: " << rectangleY2 << endl;

    if(pointX >= rectangleX1 && pointX <= rectangleX2 && pointY >= rectangleY1 && pointY <= rectangleY2)
    {
        cout << "The Point with coordinates: (" 
        << pointX << ", " << pointY << ")" << endl;
        cout << "is within the rectangle: "
             << "[X1: " << rectangleX1
             << "] [X2: " << rectangleX2
             << "] [Y1: " << rectangleY1
             << "] [Y2: " << rectangleY2
             << "] " << endl;
        return true;
    } else {
        cout << "The Point with coordinates: ("
             << pointX << ", " << pointY << ")" << endl;
        cout << "is NOT in the rectangle: "
             << "[X1: " << rectangleX1
             << "] [X2: " << rectangleX2
             << "] [Y1: " << rectangleY1
             << "] [Y2: " << rectangleY2
             << "] " << endl;
        return true;
    }

}