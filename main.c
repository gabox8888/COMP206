#include <stdio.h>
#include <stdlib.h>

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
  return 1;
}
