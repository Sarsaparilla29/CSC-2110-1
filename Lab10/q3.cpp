#include <iostream>
using namespace std;

//assume input is 10, 70, 20, 40, 60
int main(){
    int *intList;

    intList = new int[5];

    for(int i = 0; i < 5; i++)
        cin >> intList[i];
    
    for(int i = 4; i > 0; i--){
        intList[i] = intList[i] + intList[i-1];
        cout << intList[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cout << intList[i] << " ";
        sum = sum + intList[i];
    }
    cout << endl << "Sum = " << sum << endl;
}

