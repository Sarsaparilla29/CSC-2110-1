#include <iostream>

int main(){
    double *sales;
    double max;
    sales = new double[50];//change to 50a
    for(int i = 0; i < 50; i++)
        std::cin >> sales[i]; //b
    /*for(int i = 0; i < 50; i++){
        std::cout << sales[i] << " ";
    }
    std::cout << std::endl;*/
    for(int i = 0; i < 50; i++){
        if(sales[i] > max) //finds index with largest entry
            max = i;
        //if(sales[i] > max)
        //    max = sales[i];
    }
    //std::cout << "MAX: " << max << std::endl;
    sales = new double;
    /*std::cout << "After DeAllocated Memory: ";
    for(int i = 0; i < 50; i++){
        std::cout << sales[i] << " ";
    }
    std::cout << std::endl;*/
    return 0;
}
