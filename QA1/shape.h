#pragma once

class shape{ //pure virtual function
    private:
        int value;
    public:
        int getValue();
        void setValue(int av);
        virtual double getArea() = 0; //pure virtual function
};
