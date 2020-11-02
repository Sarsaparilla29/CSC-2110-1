#pragma once
#include <string>
#include "question.h"

class saquestion : public question{
    private:
        std::string answer;
    public:
        void setAnswer(std::string a);
        std::string getAnswer();
        bool checkAnswer(std::string a);
        void display();
        //question qsa;
};

