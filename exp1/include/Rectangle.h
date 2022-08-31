#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
private:

int width;
int height;

public:
    Rectangle(int h ,int w);

    int area();
    int perimeter();

    void print();

    void printShape();

    void setHeight(int);
    void setWidth(int);

    int getHeight();
    int getWidth();
};

#endif
