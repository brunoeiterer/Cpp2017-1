#include "Student.h"

Student::Student(){
    float defaultGrades[2] = {0};
    setName("empty");
    setID(0);
    setGrades(defaultGrades);
}

Student::~Student(){

}

void Student::setName(string newName){
    name = newName;
}

void Student::setID(int newID){
    ID = newID;
}

void Student::setGrades(float* newGrades){
    for(int i = 0; i < NUM_GRADES; i++){
        grades[i] = *newGrades++;
    }
}

string Student::getName(void){
    return name;
}

int Student::getID(void){
    return ID;
}

float Student::getGrade(int gradenumber){
    return grades[gradenumber];
}
