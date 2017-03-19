#include "StudentHandler.h"
#include <iostream>
using namespace std;

#define NUM_STUDENTS 20


bool StudentHandler::register_student(Student student){
    int checkedID = student.getID();
    int empty_index = 0;
    int empty_flag = 0;
    for(int i = 0; i < NUM_STUDENTS; i++){
        if(students[i].getName() != "empty" && students[i].getID() == checkedID){
            cout << "ID already in use" << endl;
            return false;
        }
        if(students[i].getName() == "empty" && empty_flag == 0){
            empty_index = i;
            empty_flag = 1;
        }
    }
    if(empty_flag == 0) {
        cout << "Student registration is full" << endl;
        return false;
    }
    else{
        float gradesToBeSet[NUM_GRADES] = {0};
        for(int i = 0; i < NUM_GRADES; i++){
            gradesToBeSet[i] = student.getGrade(i);
        }
        students[empty_index].setName(student.getName());
        students[empty_index].setID(student.getID());
        students[empty_index].setGrades(gradesToBeSet);
    }
    return true;
}

void StudentHandler::show_student(Student student){
    int studentIndex;
    bool studentMatchFlag;
    for(int i = 0; i < NUM_STUDENTS; i++){
        if(student.getName() == students[i].getName()){
            studentIndex = i;
            studentMatchFlag = true;
        }
    }
    if(studentMatchFlag == false)
        cout << "Student not found" << endl;
    else{
        cout << "Student Name: " << students[studentIndex].getName() << endl;
        cout << "Student ID: " << students[studentIndex].getID() << endl;
        cout << "Student grade 1: " << students[studentIndex].getGrade(1) << endl;
        cout << "Student grade 2: " << students[studentIndex].getGrade(1) << endl;
    }
}
