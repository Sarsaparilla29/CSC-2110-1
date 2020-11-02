#include <iostream>
#include "circle.h"

int main(){

    circle c01;
    c01.setValue(5);
    std::cout << "Shape Value: " << c01.getArea() << std::endl;


    return 0;
}

/* Visual Basic 6.0
    drawline 10, 10, 50, 40; // structured programming

    //Visual Studio 2019
    line line01;
    line.draw(10, 10, 50, 40); // object-oriented programming

    shape class; //abstract class cannot be instanced in an object
        circle class;
            radius;
        rectangle class;
            length;
            width;*/

