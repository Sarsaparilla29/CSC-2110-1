#include <iostream>
#include "numberType.h"

using namespace std;

int main()
{
    //objects
    NumberOne one;
    NumberTwo two;
    NumberThree three;
    NumberFour four;
    NumberFive five;
    NumberSix six;
    NumberSeven seven;
    NumberEight eight;
    NumberNine nine;
    NumberZero zero;

    //functions
    /*one.draw();
    two.draw();
    three.draw();
    four.draw();
    five.draw();
    six.draw();
    seven.draw();
    eight.draw();
    nine.draw();
    zero.draw();*/
    //int *numType_Ptr;
    int num = 0;
    numberType *numType_Ptr0 = &zero;
    numberType *numType_Ptr1 = &one;
    numberType *numType_Ptr2 = &two;
    numberType *numType_Ptr3 = &three;
    numberType *numType_Ptr4 = &four;
    numberType *numType_Ptr5 = &five;
    numberType *numType_Ptr6 = &six;
    numberType *numType_Ptr7 = &seven;
    numberType *numType_Ptr8 = &eight;
    numberType *numType_Ptr9 = &nine;
    cout << "Enter a number: " << endl;
    cin >> num;
    if(num == 8){
        numType_Ptr8.draw();
    }

    cout << "End of Program" << endl;
    return 0;
}
