#include <iostream>
#include "naquestion.h"

void naquestion::setAnswerMin(double min){
    answer_min = min;
}
void naquestion::setAnswerMax(double max){
    answer_max = max;
}
double naquestion::getAnswerMin(){
    return answer_min;
}
double naquestion::getAnswerMax(){
    return answer_max;
}
bool naquestion::checkAnswer(double ans){
    if(ans >= answer_min && ans <= answer_max){
        return 1;
    }
    else{
        return 0;
    }
}
naquestion::naquestion(){
    answer_min = 0;
    answer_max = 0;
}
void naquestion::display(){
    question::display();
    //std::cout << text << std::endl;
}
