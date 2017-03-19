#ifndef STUDENT_HANDLER_H
#define STUDENT_HANDLER_H

#include "Student.h"

class StudentHandler{
    Student students[20];
    public:
    void show_student(Student student);
    bool register_student(Student student);
    float mean_calculation(Student student);
    bool remove_student(Student student);
    void list_students(void);
    bool update_student(string name, float grades[NUM_GRADES]);
};

#endif
