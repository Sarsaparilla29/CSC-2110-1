#include <iostream>
using namespace std;

int main(){
    int *myPtr = new int;
    int *yourPtr = new int;

    *myPtr = 10;
    *yourPtr = 2 * *myPtr + 3;
    cout << *myPtr << " " << (*yourPtr - *myPtr + 5) << endl;

    myPtr = yourPtr;

    yourPtr = new int;
    *yourPtr = 8;
    cout << *myPtr << " " << *yourPtr << endl;

    *myPtr = 17;
    *yourPtr = 4;
    
    cout << *myPtr << " " << *yourPtr << endl;

    return 0;
}
