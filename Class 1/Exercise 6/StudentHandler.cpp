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
            cout << "ID already in use" << endl << endl;
            return false;
        }
        if(students[i].getName() == "empty" && empty_flag == 0){
            empty_index = i;
            empty_flag = 1;
        }
    }
    if(empty_flag == 0) {
        cout << "Student registration is full" << endl << endl;
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
    cout << endl;
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
        cout << "Student grade 1: " << students[studentIndex].getGrade(0) << endl;
        cout << "Student grade 2: " << students[studentIndex].getGrade(1) << endl << endl;
    }
}

void StudentHandler::list_students(void){
    int i = 0;
    while(students[i].getName() != "empty" && i < NUM_STUDENTS){
        cout << "Student Name: " << students[i].getName() << endl;
        cout << "Student ID: " << students[i].getID() << endl;
        cout << "Student grade 1: " << students[i].getGrade(0) << endl;
        cout << "Student grade 2: " << students[i].getGrade(1) << endl << endl << endl;
        i++;
    }
}

bool StudentHandler::remove_student(Student student){
    int studentMatchIndex;
    bool studentMatchFlag;
    for(int i = 0; i < NUM_STUDENTS; i++){
        if(student.getName() == students[i].getName()) {
            studentMatchFlag = true;
            studentMatchIndex = i;
        }
    }

    if(studentMatchFlag == true){
        float defaultGrades[2] = {0};
        students[studentMatchIndex].setName("empty");
        students[studentMatchIndex].setID(0);
        students[studentMatchIndex].setGrades(defaultGrades);
        return true;
    }
    else{
        cout << "Student not found" << endl << endl;
        return false;
    }
}
