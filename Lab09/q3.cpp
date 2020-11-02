#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double *length;
    double *width;

    cout << fixed << showpoint << setprecision(2);

    length = new double;
    *length = 6.5;

    width = new double;
    *width = 3.0;

    cout << "Area: " << (*length) * (*width) << ", ";
    cout << "Perimeter: " << 2 * (*length + *width) << endl;

    return 0;
}
