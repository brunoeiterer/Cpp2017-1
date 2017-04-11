#include "StudentHandler.h"
#include "List.h"
#include <iostream>
using namespace std;

/*
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

*/
void StudentHandler::show_student(Student student){
    Student aux;
    aux = students.readNode(student.getID());
        cout << "Student Name: " << aux.getName() << endl;
        cout << "Student ID: " << aux.getID() << endl;
        cout << "Student grade 1: " << aux.getGrade(0) << endl;
        cout << "Student grade 2: " << aux.getGrade(1) << endl;
        cout << "Student Final grade: " << mean_calculation(aux) << endl << endl;
}

void StudentHandler::list_students(void){
    students.listAll();
}


bool StudentHandler::remove_student(Student student){
    students.removeNode(student.getID());
    return true;
    }


bool StudentHandler::update_student(int ID, float grades[NUM_GRADES]){
    Student aux;
    Node auxnode;
    for(int i = 0; i < NUM_STUDENTS; i++){
        if(students[i].getName() == name) {
        studentMatchFlag = true;
        studentMatchIndex = i;
        }
    }
    if(studentMatchFlag == true)
    {
        students[studentMatchIndex].setGrades(grades);
        return true;
    }
    else return false;
}


float StudentHandler::mean_calculation(Student student){
    return (student.getGrade(0) + student.getGrade(1))/2;
}
