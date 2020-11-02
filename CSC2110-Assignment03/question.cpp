#include <iostream>
#include <string>
#include "question.h"

void question::setText(std::string t){
    text = t;
}
std::string question::getText(){
    return text;
}
void question::display(){
    std::cout << text << std::endl;
}
question::question(){
    text = "";
}

