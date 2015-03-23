#include "list.h"

typedef struct NODE{
  int value;
  struct NODE *nextNode;
}listNode;

listNode* head = NULL;

void initHead()
{
  if (head == NULL)
  {
    head = (listNode *)malloc(sizeof(listNode));
    head->nextNode = NULL;
  }
}

void addNode(int value)
{
  initHead();

  listNode* ptrNode = head;
  listNode* newNode; 

  while (ptrNode->nextNode != NULL )
  {
    ptrNode = ptrNode->nextNode;
  }  
  newNode = (listNode *)malloc(sizeof(listNode));
  newNode->value = value;
  newNode->nextNode = NULL;
  ptrNode->nextNode = newNode;
}

void prettyPrint()
{  
  initHead();

  listNode* ptrNode;

  if (head->nextNode == NULL) 
  {
    printf("List is empty!"); 
  }
  else 
  {
    ptrNode = head->nextNode;
  }
  while (ptrNode != NULL)
  {
    printf( " %d ", ptrNode->value);
    ptrNode = ptrNode->nextNode;
  }
}
