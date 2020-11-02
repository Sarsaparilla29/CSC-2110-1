#include <iostream>

int main(){
    int *myList;
    int *yourList;

    myList = new int[5];
    myList[0] = 8;
    for(int i = 1; i < 5; i++)
        myList[i] = i * myList[i - 1];
    
    yourList = myList;
    yourList = new int[5]; //must change memory address of yourList
    for(int i = 0; i < 5; i++){
        yourList[i] = 2 * myList[i];
    }
    //output delete later
    /*std::cout << "myList" << " " << "yourList" << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << myList[i] << "      ";
        std::cout << yourList[i] << std::endl;
    }*/
    return 0;
}
