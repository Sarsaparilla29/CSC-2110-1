#include <iostream>
#include <cmath>
#include "quiz.h"

int main()
{
    //Create objects of each class
    quiz quiz1;
    //int *array_pos[3];
    int *array_pos[3];
    int accCorrect[3] = {0,1,2};
    array_pos[3] = &accCorrect[3];
    //Set quiz questions
    //Multiple choice questions
    quiz1.setTitle("Quiz 2, Good Luck!");

    //occquestion
    quiz1.occ.setText("What are vectors in C++?");
    quiz1.occ.setChoices(0, "Vectors are used to represent arrays that change in size.");  //correct
    quiz1.occ.setChoices(1, "Vectors point to points on a curve?");
    quiz1.occ.setChoices(2, "Vectors are the part of the computer used to access the internet.");
    quiz1.occ.setChoices(3, "Vectors is an IDE used to write C++ applications.");
    quiz1.occ.setCorrectAnswer(0);

    //accquestion
    quiz1.acc.setText("Which of these are programming languages?");
    quiz1.acc.setChoices(0, "C++");
    quiz1.acc.setChoices(1, "Python");
    quiz1.acc.setChoices(2, "Ruby");
    quiz1.acc.setChoices(3, "Mac N' Cheese");
    //quiz1.acc.setCorrectAnswers(0, 1, 2); //0,1,2 are all correct but need to fix this
    quiz1.acc.setCorrectAnswers(array_pos[3]); //0,1,2 are all correct but need to fix this

    //Numerical-Answer Questions
    quiz1.na.setText("Answer a number that is below pi but larger than the square root of 2?");
    quiz1.na.setAnswerMin(sqrt(2));
    quiz1.na.setAnswerMax(3.1415);

    /*quiz1.na[1].setText("Enter a number that represents an age people normally retire: "); //60 - 75
    quiz1.na[1].setAnswer_Min(60);
    quiz1.na[1].setAnswer_Max(75);*/

    //Short Answer Questions
    quiz1.sa.setText("What snake shares the same name as a popular programming language?"); //Python
    quiz1.sa.setAnswer("Python"); //answer
    //quiz1.sa[1].setText("What is the name of the kernel Windows' uses for its operating systems?"); //NT Kernel

    quiz1.start();

    //End of Program
    return 0;
}

