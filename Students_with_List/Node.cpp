#include "Node.h"

// Constructor - initializes the node
//
Node::Node(Student dat, Node* nxt, Node* prv){
       val = dat;
       next = nxt;
       prev = prv;
}

// getVal returns the integer value stored in the node
//
Student Node::getVal(){
     return val;
}

// getNext returns a pointer for the next node in the linked list
//
Node* Node::getNext(){
     return next;
}

// getNext returns a pointer for the prev node in the linked list
//
Node* Node::getPrev(){
     return prev;
}


// setVal stores the integer value in the node
//
void Node::setVal(Student dat){
     val = dat;
}

// setNext stores the pointer to the next node in the list in the "next" field
//
void Node::setNext(Node* nxt){
       next = nxt;
}

// setNext stores the pointer to the next node in the list in the "next" field
//
void Node::setPrev(Node* prv){
       prev = prv;
}

