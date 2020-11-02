#include <iostream>
#include "clockType.h"

int main()
{
    std::cout << "Lecture 01\n";
    std::cout << "First clock time\n";
    clockType firstClock; //using the no-argument constructor
    firstClock.printTime();

    std::cout << "Second clock time\n";
    clockType secondClock; //using the no-argument constructor
    secondClock.setTime(10, 30, 13);
    secondClock.printTime();

    std::cout << "Third clock time\n";
    clockType thirdClock(6, 25, 10); //using constructor with 3 integer values
    thirdClock.printTime();
}
