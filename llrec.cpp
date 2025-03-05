#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot){
  if(head == NULL){
    smaller = NULL;
    larger = NULL;
    return;
  }
  Node* temp = head;
  head = NULL;
  if(temp->val <= pivot){
    smaller = temp;
    llpivot(temp->next, smaller->next, larger, pivot);
  }
  else{
    larger = temp;
    llpivot(temp->next, smaller, larger->next, pivot);
  }
}
