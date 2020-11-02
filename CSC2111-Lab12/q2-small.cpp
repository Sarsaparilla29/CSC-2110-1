#include <iostream>
using namespace std;

class small{
    public:
        virtual void print() const;
        virtual int add() {return x + y;}
        small() {}
        small(int a, int b) {x = a; y = b;}
    private:
        int x = 0;
        int y = 0;
};

void small::print() const{
    cout << "small: -- " << endl
         << "x: " << x << ", y = " << y << endl;
}

class notSmall : public small {
    public:
        void print() const;
        int add();
        notSmall() {}
        notSmall(int a, int b, int c)
            : small(a,b) {z=c;}
    private:
        int z;
};

void notSmall::print() const{
    small::print();
    cout << "noSmall--- z: " << z << endl;
}
int notSmall::add(){
    return z + small::add();
}

//==========================================================
// Main Function
//==========================================================
int main(){
    small *ptrSmall;
    small objectSmall(2,3);

    notSmall objectBig(3,5,9);

    ptrSmall = &objectSmall;
    cout << ptrSmall->add() << endl;
    ptrSmall->print();

    cout << "*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;

    ptrSmall = &objectBig;
    cout << ptrSmall->add() << endl;
    ptrSmall->print();

    return 0;
}
