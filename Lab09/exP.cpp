#include <iostream>
using namespace std;

int main(){
    int x;
    int *p;

    p = &x;

    cout << *p << endl;
    *p = 42;
    cout << x << " " << *p << endl;
    return 0;
}

