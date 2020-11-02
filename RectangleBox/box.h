#pragma once
#include "rectangle.h"

class box : public rectangle {
private:
    double height;
    double volume;
    double surfaceArea;
public:
    void setBox(double l, double w, double h);
    double getBox();
    box();
    double getVolume();
    double getSurfaceArea();
    void print();
    ~box();
};
