#include "StudentHandler.h"

#define NUM_STUDENTS 20


bool StudentHandler::register_student(Student student){
    int checkedID = student.getID();
    int empty_index = 0;
    int empty_flag = 0;
    for(int i = 0; i < NUM_STUDENTS; i++){
        if(&students[i] != NULL && students[i].getID() == checkedID)
            return false;
        if(&students[i] == NULL && empty_flag == 0){
            empty_index = i;
            empty_flag = 1;
        }
    }
    if(empty_flag == 0) return false;
    else{
        float gradesToBeSet[NUM_GRADES] = {0};
        for(int i = 0; i < NUM_GRADES; i++){
            gradesToBeSet[i] = student.getGrade(i);
        }
        students[empty_index].setName(student.getName());
        students[empty_index].setID(student.getID());
        students[empty_index].setGrades(gradesToBeSet); 
    }
}
