#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int data_do_bruno[] = {19,01,1995};

int main(){
  cout << "/* message */" << '\n';

  Person bruno = new Person("Bruno Eiterer",  &data_do_bruno, "Carianos, Rua puta que pariu perto da ressacada, 1234", 123456789);
  bruno.print();

}
