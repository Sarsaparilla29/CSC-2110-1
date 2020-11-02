#include <iostream>
#include "occquestion.h"

void occquestion::setCorrectAnswer(int array_pos){
    correctAnswer = array_pos;
}
int occquestion::getCorrectAnswer(){
    return correctAnswer;
}
bool occquestion::checkAnswer(int array_pos){
    if(array_pos - 1 == correctAnswer){
        return 1;
    }
    else{
        return 0;
    }
}

