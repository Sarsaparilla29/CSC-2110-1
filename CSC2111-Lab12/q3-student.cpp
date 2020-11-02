#include <iostream>
#include <string>
using namespace std;

class studentType : public personType {
    public:
        virtual void print() = 0; //change to virtual
        virtual void calculateGPA() = 0; //change to virtual
        void setID(long id);
        void setCourses(const string c[], int noOfC);

        void getID();
        void getCourses(string c[], int noOfC);
        void getGrades(char cG[], int noOfC);
        studentType(string fName = "", string lastName = "",
                long id = -1, string *c = nullptr,
                char *cG = nullPtr, int noOfC = 0);

    private:
        long studentId;
        string courses[6];
        char coursesGrade[6];
        int noOfCourses;
};

//rewrite the definition of the class student so that the functions
//print and calculateGPA are pure virtual functions
