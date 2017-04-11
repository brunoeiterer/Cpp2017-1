#include "Student.h"
#include "StudentHandler.h"
#include <iostream>
using namespace std;

int main()
{
    Student inputStudent;
    StudentHandler studentHandler;

    string aux_name;
    int aux_ID;
    float aux_grades[NUM_GRADES];

    int operation;

    while(1){

        cout << "Select operation to be performed:" << endl;
        cout << "1 - Register student" << endl;
        cout << "2 - Consult student" << endl;
        cout << "3 - List all students" << endl;
        cout << "4 - Remove student" << endl;
        cout << "5 - Update student data" << endl;

        cin >> operation;
        cin.ignore();
        cout << endl;

        switch (operation) {
            case 1:
            cout << "Enter student name: ";
            getline(cin, aux_name);
            inputStudent.setName(aux_name);

            cout << "Enter student ID: ";
            cin >> aux_ID;
            cin.ignore();
            inputStudent.setID(aux_ID);

            cout << "Enter student first grade: ";
            cin >> aux_grades[0];
            cin.ignore();

            cout << "Enter student second grade: ";
            cin >> aux_grades[1];
            cin.ignore();
            inputStudent.setGrades(aux_grades);

            studentHandler.register_student(inputStudent);

            break;

            case 2:
            cout << "Enter student name: ";
            getline(cin, aux_name);
            inputStudent.setName(aux_name);
            studentHandler.show_student(inputStudent);
            break;

            case 3:
            studentHandler.list_students();
            break;

            case 4:
            cout << "Enter student name: ";
            getline(cin, aux_name);
            inputStudent.setName(aux_name);
            studentHandler.remove_student(inputStudent);
            break;

            case 5:
            cout << "Enter student name: ";
            getline(cin, aux_name);
            cout << "Enter grade 1: ";
            cin >> aux_grades[0];
            cout << "Enter grade 2: ";
            cin >> aux_grades[1];
            studentHandler.update_student(aux_name,aux_grades);
            cout << endl;
            break;

            default:
            break;
        }
    }
    return 0;
}
