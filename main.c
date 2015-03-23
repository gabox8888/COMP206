#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (int argc, char** argv)
{
  FILE *file;
  while (1)
  { 
    char inputBuffer[500];
   
    printf("Please input a file name:");
    printf("\n");
    scanf("%s", inputBuffer);
    file = fopen(inputBuffer,"r+");
    if (file != NULL)
    {
      break;
    }
  }
  int numberBuffer = 0;
  fscanf(file,"%d",&numberBuffer);
  while (!feof(file))
  {
    addNode(numberBuffer);
    fscanf(file,"%d",&numberBuffer);
  } 
  fclose(file);
  prettyPrint();
  return 1;
}
