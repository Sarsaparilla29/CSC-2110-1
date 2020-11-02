#include <iostream>
#include "box.h"
using namespace std;

int main()
{
    box box1;
    box box2;
    cout << "Welcome to Rectangle-Box Inheritance Program" << endl;
    cout << "\n";
    //set side dimension
    box1.setBox(8,4,3);
    box2.setBox(2,4,5);

    //print
    box1.print();
    box2.print();

    //End of program
    return 0;
}
