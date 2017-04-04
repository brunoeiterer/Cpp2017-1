#include "person.h"

Person::Person(string name, int* birth, string address, double cpf){
  this->name = name;
  this->address = address;
  this->cpf = cpf;
  this->birth[0] = birth[0];
  this->birth[1] = birth[2];
  this->birth[2] = birth[2];


};

void Person::print(void){
  std::cout << this->name << '\n';
  std::cout << this->address << '\n';
  std::cout << this->cpf << '\n';
  std::cout << this->birth[0]<<":"<<this->birth[1]<<":"<<this->birth[2] << '\n';
}
