#pragma once
#include <string>
#include "question.h"

class mcquestion : public question{
    private:
        std::string choices[4];
        int correctAnswer;
    public:
        void setChoices(int array_pos, std::string choice);
        std::string getChoices();
        virtual bool checkAnswer(int array_pos) = 0;
        void display();
        mcquestion();
};

