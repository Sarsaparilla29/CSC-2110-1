#pragma once
#include <string>

class question{
    private:
        std::string text;
    public:
        void setText(std::string t);
        std::string getText();
        virtual void display() = 0;
        question();
};
