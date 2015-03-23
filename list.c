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

listNode* findNode(int queryValue)
{
  initHead();

  listNode* ptrNode = head;

  while (ptrNode->nextNode->value != queryValue)
  {
    ptrNode = ptrNode->nextNode;
    if (ptrNode->nextNode == NULL)
    {
      ptrNode = NULL;
      break;
    }
  }
  return ptrNode;
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

BOOLEAN deleteNode(int queryValue)
{
  BOOLEAN result = 1;
  listNode* ptrNode = findNode(queryValue);  

  if (ptrNode != NULL)
  {
    listNode* deleteNode = ptrNode->nextNode;
    ptrNode->nextNode = deleteNode->nextNode;
    deleteNode->nextNode = NULL;
    free(deleteNode);
  }
  else result = 0;

  return result;
}
