#include <iostream>
#include <string>
#include <algorithm>
#include "saquestion.h"

void saquestion::setAnswer(std::string a){
    std::transform(a.begin(), a.end(), a.begin(), toupper); //changes to upper case
    answer = a;
}
std::string saquestion::getAnswer(){
    return answer;
}
bool saquestion::checkAnswer(std::string a){
    std::transform(a.begin(), a.end(), a.begin(), toupper); //changes to upper case
    if(a == answer){
        return 1;
    }
    else{
        return 0;
    }
}
void saquestion::display(){
    question::display();

}
