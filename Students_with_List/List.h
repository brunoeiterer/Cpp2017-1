#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>

class List {

  Node* head;

public:
  List();
  ~List();
  void insertBeforeFirst(Student dat);
  void insertAfterLast(Student dat);
  Student readFirst();
  void removeFirst();
  void insertionSort(Student value);
  void removeNode(int dat);
  Student readStudent(int dat);
  Node*   readNode(int dat);
  void listAll();
};

#endif // LIST_H
