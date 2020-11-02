#include <iostream>
#include "clockType.h"
    void clockType::setTime(int hours, int minutes, int seconds){
        hr = hours;
        min = minutes;
        sec = seconds;
    }
    void clockType::printTime(){
        std::cout << hr << ":" << min <<":" << sec << "\n";
    }
    clockType::clockType(){
        hr = 0;
        min = 0;
        sec = 0;
    }
    clockType::clockType(int hours, int minutes, int seconds){
        hr = hours;
        min = minutes;
        sec = seconds;
    }

 

