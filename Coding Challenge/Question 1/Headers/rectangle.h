#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
#include <vector>
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
    vector<float> position;
    void setCoordinates();

    public:
        Rectangle();
        Rectangle(float, float, float, float); 
        ~Rectangle();

        void setHeight(float);
        void setWidth(float);
        void setXYposition(float, float);
        vector<float> getPosition() { return position; }
        float getHeight() { return height; }
        float getWidth() { return width; }
        float getX1position() { return left; }
        float getX2position() { return right; }
        float getY1position() { return bottom; }
        float getY2position() { return top; }

        int getID() { return ID; }
        static int getCounter() { return counter; }
        };

#endif // RECTANGLE_H_INCLUDED