#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double *trip1Cost = new double;
    double *trip2Cost = new double;
    double *trip3Cost = new double;
    double *max;

    *trip1Cost = 100.00;
    *trip2Cost = 350.00;
    trip3Cost = trip2Cost;
    trip2Cost = trip1Cost;
    trip1Cost = new double;
    *trip1Cost = 175;
    *trip3Cost = 275;
    cout << *trip1Cost << " " << *trip2Cost << " " << *trip3Cost << endl;
    cout << fixed << showpoint << setprecision(2);

    cout << "Trip total cost: $"
        << (*trip1Cost + *trip2Cost + *trip3Cost) << endl;

    max = trip1Cost;
    if (*max < *trip2Cost)
        max = trip2Cost;
    if (*max < *trip3Cost)
        max = trip3Cost;

    cout << "Highest trip cost: $" << *max << endl;
    
    return 0;
}
