#include <iostream>
#include "accquestion.h"

//setCorrectAnswer paramater is an array containing all positions of the correct answers
void accquestion::setCorrectAnswers(int array_pos[3]){
    //std::cout << array_pos[0] << std::endl;
    for(int i = 0; i < 3; i++){
        correctAnswers[i] = *array_pos + i;
    }
}
accquestion::accquestion(int array_pos[3]) {
    for (int i = 0; i < 3; i++) {
        correctAnswers[i] = *array_pos + i;
    }
}
/*void accquestion::setCorrectAnswers(int ans_1, int ans_2, int ans_3){
    correctAnswers[0] = ans_1;
    correctAnswers[1] = ans_2;
    correctAnswers[2] = ans_3;
}*/
//getCorrectAnswer returns a copy of the correctAnswers in an array
int accquestion::getCorrectAnswers(){
    int* p = 0;
    p = &correctAnswers[4];

    //p = new int correctAnswer[4];
    for(int i = 0; i < 4; i++){
        return *p + i;
    }
}

bool accquestion::checkAnswer(int array_pos){
    int correct = 0;
    for(int i = 0; i < 4; i++){
        if(array_pos - 1 == correctAnswers[i])
            correct = 1; //this allows user to input in any order
    }
    if(correct == 1){
        return true;
    }
    else{
        return false;
    }
}
accquestion::accquestion() {
    correctAnswers[0] = 0;
    correctAnswers[1] = 0;
    correctAnswers[2] = 0;
    correctAnswers[3] = 0;
}

