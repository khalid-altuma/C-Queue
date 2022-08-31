#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rect = Rectangle(4, 8);
    rect.print();
    rect.printShape();
    return 0;
}
