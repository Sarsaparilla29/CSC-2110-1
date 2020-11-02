#include <iostream>
using namespace std;

int main(){
    int *intArrayPtr;
    int *temp;
    intArrayPtr = new int[5];
    *intArrayPtr = 7;
    temp = intArrayPtr;

    for(int i = 1; i < 5; i++){
        intArrayPtr++;
        *intArrayPtr = *(intArrayPtr - 1) + 2 * i;
        cout << *intArrayPtr << " ";
    }

    intArrayPtr = temp;
    cout << endl;
    cout << "Final: ";
    for(int i = 0; i < 5; i++){
        cout << *intArrayPtr << " ";
        intArrayPtr++;
    }
    cout << endl;
}
