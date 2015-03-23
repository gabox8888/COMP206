#ifndef LIST_H_
#define LIST_H_

#include <stdlib.h>
#include <stdio.h>

typedef int BOOLEAN;

void addNode(int value);//This will add another value to the linked list
void prettyPrint();//This will display the linked list in a "pretty" manner
BOOLEAN deleteNODE(int value);//This will delete element at the given index

#endif
