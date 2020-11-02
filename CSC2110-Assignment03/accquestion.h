#pragma once
#include "mcquestion.h"

class accquestion : public mcquestion{
    private:
        int correctAnswers[4] = { 0,0,0,0 };
    public:
        //mcquestion mcacc;
        void setCorrectAnswers(int array_pos[3]);
        //void setCorrectAnswers(int ans_1, int ans_2, int ans_3);
        int getCorrectAnswers();
        bool checkAnswer(int array_pos);
        accquestion(int array_pos[3]);
        accquestion();
};
