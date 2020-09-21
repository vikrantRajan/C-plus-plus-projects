#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

class Point2D
{
    // private
    float x;
    float y;

    public:
        void setPoint(float, float);
        float getPointX() { return x; }
        float getPointY() { return y; }
};

#endif // POINT2D_H_INCLUDED