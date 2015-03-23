#include "list.h"

typedef struct NODE{
  int value;
  struct NODE *nextNode;
}listNode;

listNode* head = NULL;

void addNODE(int value)
{
  listNode* ptrNode;
  listNode* newNode;
    
  ptrNode =  head;

  while (ptrNode->nextNode != NULL )
  {
    ptrNode = ptrNode->nextNode;
  }  
  newNode = (listNode *)malloc(sizeof(listNode));
  newNode->value = value;
  newNode->nextNode = NULL;
  ptrNode->nextNode = newNode;
}
