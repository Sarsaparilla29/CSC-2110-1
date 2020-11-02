#include <iostream>
#include <string>

int main(){
    std::string seasons[4] = {"Winter", "Spring", "Summer", "Fall"};
    std::string *strPtr;
    strPtr = new std::string[5];
    for(int i = 0; i < 4; i++)
        strPtr[i] = seasons[i];
    for(int i = 0; i < 4; i++)
        std::cout << strPtr[i] << std::endl;
    return 0;
}
