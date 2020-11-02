#include <iostream>
#include <string>
#include <iomanip> //setprecision
#include "quiz.h"

//mutator
void quiz::setTitle(std::string t){
    title = t;
}
//accessor
std::string quiz::getTitle(){
    return title;
}
//start function runs through questions and answers
void quiz::start(){
    double naq = 0;
    int ocq = 0;
    int acq = 0; //= {0,0,0};
    std::string saq = "";
    std::cout << title << std::endl;
    //one-correct-choice question
    occ.display();
    std::cout << "Your Answer(occ): ";
    std::cin >> ocq;
    if(occ.checkAnswer(ocq) == 1){
        correct_answers++;
        std::cout << "Correct!" << std::endl;
    }
    else{
        std::cout << "Incorrect!" << std::endl;
    }
    //any-correct-choice question
    acc.display();
    for(int i = 0; i < 3; i++){
            std::cout << "Your Answer(acc): ";
            std::cin >> acq;

        if(acc.checkAnswer(acq) == 1){
            correct_answers++;
            std::cout << "Correct!" << std::endl;
        }
        else{
            std::cout << "Incorrect!" << std::endl;
        }
    }
    //numerical-answer question
    na.display();
    std::cout << "Your Answer(na): ";
    std::cin >> naq;
    if(na.checkAnswer(naq) == 1){
        correct_answers++;
        std::cout << "Correct!" << std::endl;
    }
    //short-answer question
    sa.display();
    std::cout << "Your Answer(sa): ";
    std::cin >> saq;
    if(sa.checkAnswer(saq) == 1){
        correct_answers++;
        std::cout << "Correct!" << std::endl;
    }
    quiz::grade();
}

//grade function to calculate final grade
void quiz::grade(){
    double gradePer = 0;
    std::cout << std::fixed << std::setprecision(2);
    gradePer = (correct_answers/6) * 100;
    std::cout << "Total score: " << gradePer << "%" << std::endl;
}

