#pragma once

class numberType { //abstract class
    public:
        virtual void draw() = 0;
};

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
