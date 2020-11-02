#include <iostream>

int main(){
    int value = 7;
    //&value; //returns the memory address of value
    int *ptrValue = NULL;
    ptrValue = &value;
    //              value
    //ptrValue --> [  7  ]
    //*ptrValue //get the content/value/structure pointed by ptrValues;
    std::cout << "*ptrValue: " << *ptrValue << std::endl;
    

}
