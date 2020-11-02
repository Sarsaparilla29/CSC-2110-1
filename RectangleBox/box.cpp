#include <iostream>
#include "box.h"
using namespace std;

box::box() {
    height = 0;
}
void box::setBox(double l, double w, double h) {
    rectangle::setRectangle(l, w);
    height = h;
}
double box::getBox(){
    return height;
}
double box::getVolume() {
    cout << "Volume: " << rectangle::area()*height << endl;
}
double box::getSurfaceArea() {
    cout << "Surface Area: " << 2*(rectangle::area() + (rectangle::getLength()*height)  + (rectangle::getWidth()*height)) << endl;
}

void box::print() {
    rectangle::print();
    cout << "Height: " << height << endl;
    box::getVolume();
    box::getSurfaceArea();
    cout << "\n";
}

box::~box() {
    cout << "Destroying Box..." << endl;
}
