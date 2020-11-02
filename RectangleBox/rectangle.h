#pragma once

class rectangle {
private:
    double length;
    double width;
public:
    rectangle();
    void setRectangle(double l, double w);
    double getLength();
    double getWidth();
    double area();
    double perimeter();
    void print();
    ~rectangle();
};
