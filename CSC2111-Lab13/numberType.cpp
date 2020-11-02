#include <iostream>

//numberType base class
class numberType { //abstract class
    public:
        virtual void draw() = 0;
};

//number 1 derived class
class NumberOne : public numberType {
    public:
        void draw(){
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
        }
};
//number 2 derived class
class NumberTwo : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "*  " << std::endl;
            std::cout << "***" << std::endl;
        }
};
//number 3 derived class
class NumberThree : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "***" << std::endl;
        }
};
//number 4 derived class
class NumberFour : public numberType {
    public:
        void draw(){
            std::cout << "* *" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
        }
};
//number 5 derived class
class NumberFive : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "*  " << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "***" << std::endl;
        }
};
//number 6 derived class
class NumberSix : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "*  " << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "***" << std::endl;
        }
};
//number 7 derived class
class NumberSeven : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "  *" << std::endl;
        }
};
//number 8 derived class
class NumberEight : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "***" << std::endl;
        }
};
//number 9 derived class
class NumberNine : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "***" << std::endl;
            std::cout << "  *" << std::endl;
            std::cout << "***" << std::endl;
        }
};
//number 0 derived class
class NumberZero : public numberType {
    public:
        void draw(){
            std::cout << "***" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "* *" << std::endl;
            std::cout << "***" << std::endl;
        }
};
//==========================================================
// Main Function
//==========================================================
int main()
{
    //Number# objects
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

    //numberType Pointer objects
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
    int num = 0; //user input variable

    std::cout << "Enter a number: ";
    std::cin >> num;
    //if statement for drawing
    if(num == 0)
        numType_Ptr0->draw();
    else if(num == 1)
        numType_Ptr1->draw();
    else if(num == 2)
        numType_Ptr2->draw();
    else if(num == 3)
        numType_Ptr3->draw();
    else if(num == 4)
        numType_Ptr4->draw();
    else if(num == 5)
        numType_Ptr5->draw();
    else if(num == 6)
        numType_Ptr6->draw();
    else if(num == 7)
        numType_Ptr7->draw();
    else if(num == 8)
        numType_Ptr8->draw();
    else if(num == 9)
        numType_Ptr9->draw();
    else
        std::cout << std::endl;

    //end of program
    std::cout << "End of Program" << std::endl;
    return 0;
}
