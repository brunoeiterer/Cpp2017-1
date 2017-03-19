#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using std::string;

#define NUM_GRADES 2


class Student{
    string name;
    int ID;
    float grades[NUM_GRADES];
    public:
    Student();
    ~Student();
    void setName(string newName);
    void setID(int newID);
    void setGrades(float* newGrades);
    string getName(void);
    int getID(void);
    float getGrade(int gradenumber);
};

#endif
