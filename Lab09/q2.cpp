#include <iostream>
#include <iomanip>
using namespace std;

//output base, height, volume, and surface area of a cylinder
int main(){
    double *baseRadius;
    double *height;

    cout << fixed << showpoint << setprecision(2);

    baseRadius = new double;
    *baseRadius = 1.5;

    height = new double;

    *height = 2 * (*baseRadius);

    baseRadius = new double;
    *baseRadius = 4.0;

    cout << "Radius of the base: " << *baseRadius << endl; 
    cout << "Height: " << *height << endl; 
    cout << "Volume: " << 3.14 * (*baseRadius) * (*baseRadius) 
        << endl; 
    cout << "Surface Area: "
        << 2 * 3.14 * (*baseRadius) * (*height) << endl;

    return 0;
}
