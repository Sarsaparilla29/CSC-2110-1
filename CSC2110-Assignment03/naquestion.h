#pragma once
#include "question.h"

class naquestion : public question {
    private:
        double answer_min;
        double answer_max;
    public:
        naquestion();
        //mutators
        void setAnswerMin(double min);
        void setAnswerMax(double max);
        //accessor
        double getAnswerMin();
        double getAnswerMax();

        //check answer function
        bool checkAnswer(double ans);

        void display();

        //question qna;
};
