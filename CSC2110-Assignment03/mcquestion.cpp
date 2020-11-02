#include <iostream>
#include <string>
#include "mcquestion.h"

void mcquestion::setChoices(int array_pos, std::string choice){
    choices[array_pos] = choice;
}
std::string mcquestion::getChoices(){
    for(int i = 0; i < 4; i++){
        return choices[i];
        //std::cout << choices[i] << std::endl;
    }
}
bool mcquestion::checkAnswer(int array_pos){
    if(array_pos - 1 == correctAnswer){
        return 1;
    }
    else{
        return 0;
    }
}
void mcquestion::display(){
    question::display();
    for(int i = 0; i < 4; i++){
        std::cout << i + 1 << ". " << choices[i] << std::endl;
    }
}
mcquestion::mcquestion(){
    choices[0] = "";
    choices[1] = "";
    choices[2] = "";
    choices[3] = "";
}

