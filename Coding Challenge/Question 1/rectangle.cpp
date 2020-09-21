#include "Headers/rectangle.h"


int Rectangle::counter = 0;
Rectangle::Rectangle()
{
    counter++;
    this->ID = counter;
    this->positionX = 0;
    this->positionY = 0;
    this->height = 10;
    this->width = 5;
    this->setCoordinates();
    cout << "Constructured Rectangle ID: " << this->ID << endl;
}

void Rectangle::setCoordinates()
{
    this->left = this->positionX;
    this->right = this->positionX + this->width;
    this->top = this->positionY + this->height;
    this->bottom = this->positionY;
}

Rectangle::~Rectangle()
{

    cout << "Deconstructured Rectangle ID: " << this->ID << endl;
}

void Rectangle::setHeight(float height)
{
    this->height = height;
    this->setCoordinates();
}

void Rectangle::setWidth(float width)
{
    this->width = width;
    this->setCoordinates();
}

void Rectangle::setXYposition(float x, float y)
{
    this->positionX = x;
    this->positionY = y;
    this->setCoordinates();
}
