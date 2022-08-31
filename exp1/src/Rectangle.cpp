#include "Rectangle.h"

    Rectangle::Rectangle(int h,int w)
    {

        setHeight(h);
        setWidth(w);

    }

    int Rectangle::area()
    {
        return height * width;
    }
    int Rectangle::perimeter()
    {
        return 2*(height + width);
    }

    void Rectangle::setHeight(int h)
    {
        height = h;
    }
    void Rectangle::setWidth(int w)
    {
        width = w;
    }

    int Rectangle::getHeight()
    {
        return height;
    }
    int Rectangle::getWidth()
    {
        return width;
    }
    void Rectangle::print()
    {
        cout << "the rectangle's Height is " << getHeight() << endl;

    cout << "the rectangle's Width is "  << getWidth() << endl;

    cout << "the rectangle's Area is "   << area() << endl;

    cout << "the rectangle's Perimeter is " << perimeter() << endl;
    }
    void Rectangle::printShape()
    {
        for (int j=0; j < getHeight(); j++)
            {
        for (int i=0; i < getWidth(); i++)
        {
            cout << "* ";
        }
        cout << endl;
        }
    }


    // how do you find your uncle's coding skills
