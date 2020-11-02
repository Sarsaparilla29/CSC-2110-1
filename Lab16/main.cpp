#include <iostream>

class complexType {
    private:
        int real, imag;
    public:
        complexType(int r = 0, int i = 0) {real = r; imag = i;}

        //this is automatically called when '+' is used with
        //between two complexType objects
        complexType operator + (complexType const &obj){
            complexType res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        complexType operator - (complexType const &obj){
            complexType res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }
        complexType operator / (complexType const &obj){
            complexType res;
            res.real = real / obj.real;
            res.imag = imag / obj.imag;
            return res;
        }

        void print1() {
            std::cout << real << " + i" << imag << std::endl;
        }
        void print2(){
            std::cout << real << " - i" << imag << std::endl;
        }
        void print3(){
            std::cout << real << " / i" << imag << std::endl;
        }
};

int main(){
    //objects
    complexType c1(10,5), c2(2,4); //(a,b) (c,d)
    complexType c3 = c1 + c2; // +
    complexType c4 = c1 - c2; // -
    complexType c5 = c1 / c2; // /

    //print statements
    c3.print1();
    c4.print2();
    c5.print3();

    return 0;
}
