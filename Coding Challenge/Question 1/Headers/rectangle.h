#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
using namespace std;

class Rectangle
{
    // private
    static int counter;
    int ID;
    float height;
    float width;
    float positionX;
    float positionY;
    float left;
    float right;
    float bottom;
    float top;
    void setCoordinates();

    public:
        Rectangle();
        ~Rectangle();
        void setHeight(float);
        void setWidth(float);
        void setXYposition(float, float);
        float getHeight() { return height; }
        float getWidth() { return width; }
        float getXposition() { return positionX; }
        float getYposition() { return positionY; }
        float getX1position() { return left; }
        float getX2position() { return right; }
        float getY1position() { return bottom; }
        float getY2position() { return top; }

        int getID() { return ID; }
        static int getCounter() { return counter; }
};

#endif // RECTANGLE_H_INCLUDED