#include "List.h"
using namespace std;

// the list grows towards the next pointer, so the head prev pointer is null
List::List() {
   head = NULL;
}

List::~List() {
  Node* cursor = head;
  while(head) {
    cursor = cursor->getNext();
    delete head;
    head = cursor;
  }
  head = NULL; // Officially empty
}

void List::insertBeforeFirst(Student dat) {

  head = new Node(dat, head, NULL);
}

void List::insertAfterLast(Student dat) {
  Node* p = head;
  Node* q = head;

  if (head == NULL)
     head = new Node(dat, NULL, NULL);
  else {
     while (q != 0) {
        p = q;
        q = p->getNext();
     }
     p->setNext(new Node(dat, NULL, p));
  }
}

Student List::readFirst() {
   return head->getVal();
}

void List::removeFirst() {
  if (head != NULL){
     //cout << "Removendo: " << head << endl;
     //cout << "e fica:" << head->getVal() << endl;
     Node* oldHead = head;
     head = head->getPrev();
     delete oldHead;
  }
}

void List::removeNode(int dat) {
  Node* p = head;
  Node* q = head;

  if (head == NULL)
    return;
  else {
	  while ((q != NULL) && (q->getVal().getID() != dat)){  // Error!! the addresses will always be different!
		  p = q;
		  q = p->getNext();
	  }
	  if (q != NULL) {
		  if (q == head){	// it is the first node
			  head = q->getNext();
			  delete q;
		  }
		  else{	// the node is in the middle
              Node* newPrev = q->getPrev();
              Node* newNext = q->getNext();
			  p->setNext(newPrev);
			  p->setPrev(newNext);
			  delete q;
		  }
	  }
  }
}

Node* List::readNode(int dat){
  Node* p = head;
  Node* q = head;
  Node* retval;

  if (head == NULL)
    return retval;
  else {
	  while ((q != NULL) && (q->getVal().getID() != dat)){  // Error!! the addresses will always be different!
		  p = q;
		  q = p->getNext();
	  }
	  return q;
  }
}


void List::listAll() {
  Node* aux = head;
  while (aux != 0){
     cout << aux->getVal().getName() << endl;
     cout << aux->getVal().getID() << endl;
     aux = aux->getNext();
  }
}

/*
void List::insertionSort(Student value) {
  Node* p = head;
  Node* q = head;

  if (head == 0)
  {
     head = new Node(value,head);
	 Student i;
	 i = head->getVal();
  }
  else
  {
	  Student pStudent;
	  Student auxStudent;
	  pStudent = q->getVal();
	  auxStudent = pStudent;
	  while ((q != 0) && (auxStudent < value))
	  {
		  p = q;
		  q = p->getNext();
		  if (q != 0)
		  {
			pStudent = q->getVal();
			auxStudent = pStudent;
		  }
	  }
	  if (p == q)
		  head = new Node(value,head);
	  else
			p->setNext(new Node(value,q));
  }
}
*/
