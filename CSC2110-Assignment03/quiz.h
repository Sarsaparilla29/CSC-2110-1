#pragma once
#include <string>
#include "naquestion.h"
#include "saquestion.h"
#include "mcquestion.h"
#include "occquestion.h"
#include "accquestion.h"

class quiz {
    private:
        std::string title = "";
        int correct = 0;
    public:
        int total_answers = 0;
        double correct_answers = 0;
        naquestion na;
        saquestion sa;
        //mcquestion mc[2];
        occquestion occ;
        accquestion acc;
        void setTitle(std::string t);
        std::string getTitle();

        void start();
        void grade();
};
