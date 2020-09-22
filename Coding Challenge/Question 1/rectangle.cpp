#include "Headers/rectangle.h"
#include <vector>

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
    cout << "X: " << this->getPosition()[0]
         << " Y: " << this->getPosition()[1]
         << " Height: " << this->getPosition()[2]
         << " Width: " << this->getPosition()[3]
         << endl
         << endl
         << endl;
}

Rectangle::Rectangle(float x, float y, float h, float w)
{
    counter++;
    this->ID = counter;
    this->positionX = x;
    this->positionY = y;
    this->height = h;
    this->width = w;
    this->setCoordinates();
    cout << "Constructured Rectangle ID: " << this->ID << endl;
    cout << "X: " << this->getPosition()[0]
         << " Y: " << this->getPosition()[1]
         << " Height: " << this->getPosition()[2]
         << " Width: " << this->getPosition()[3]
         << endl
         << endl
         << endl;
}

void Rectangle::setCoordinates() 
{
    this->left = this->positionX;
    this->right = this->positionX + this->width;
    this->top = this->positionY + this->height;
    this->bottom = this->positionY;
    this->position.push_back(this->left);
    this->position.push_back(this->right);
    this->position.push_back(this->bottom);
    this->position.push_back(this->top);
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
