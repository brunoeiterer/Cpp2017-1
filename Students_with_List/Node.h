#include "Student.h"

class Node {

    Student val;
    Node* next;
    Node* prev;

  public:

    Node(Student dat, Node* nxt, Node* prv);
    Student getVal();
    Node* getNext();
    Node* getPrev();
    void setVal(Student dat);
    void setNext(Node* nxt);
    void setPrev(Node* prev);
};
