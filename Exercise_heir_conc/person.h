#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::string;

class Person{
    private:
    string name;
    int birth[3];
    string address;
    double cpf;

    public:
    Person(string, int* , string, double);
    void print(void);
};


#endif // PERSON_H
