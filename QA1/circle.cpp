#include <iostream>
#include "circle.h"


double circle::getArea(){
    return value * value * 3.14159;
}

void circle::setValue(int av){
    value = av;
}
