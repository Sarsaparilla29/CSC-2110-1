#pragma once
#include "mcquestion.h"

class occquestion : public mcquestion{
    private:
        int correctAnswer = 0;
    public:
        //mcquestion mcocc;
        void setCorrectAnswer(int array_pos);
        int getCorrectAnswer();
        bool checkAnswer(int array_pos);
};

