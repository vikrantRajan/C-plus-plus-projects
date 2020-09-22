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
        vector<float> getPosition() const { return position; }
        float getHeight() const { return height; }
        float getWidth() const { return width; }
        float getX1position() const { return left; }
        float getX2position() const { return right; }
        float getY1position() const { return bottom; }
        float getY2position() const { return top; }

        int getID() const { return ID; }
        static int getCounter() { return counter; }
        };

#endif // RECTANGLE_H_INCLUDED