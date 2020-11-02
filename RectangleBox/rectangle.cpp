#include <iostream>
#include "rectangle.h"
using namespace std;

rectangle::rectangle() {
    length = 0;
    width = 0;
}
void rectangle::setRectangle(double l, double w) {
    length = l;
    width = w;
}
double rectangle::getLength() {
    return length;
}
double rectangle::getWidth() {
    return width;
}
double rectangle::area() {
    return length * width;
}
double rectangle::perimeter() {
    return 2*(length + width);
}

void rectangle::print(){
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
}
rectangle::~rectangle() {
    cout << "Destroying Rectangle..." << endl;
}
