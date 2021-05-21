#include <stdio.h>
#include <stdlib.h>

//#define STACK_MAXSIZE  21474836
#define STRING_MAXSIZE 120

struct pilha
{
    char pilha[60][STRING_MAXSIZE];
    int top;
};

typedef struct pilha PILHA;
PILHA p;

int main ()
{
  p.top = -1;

  char value[STRING_MAXSIZE];

  while(scanf(" %[^\n]s", value) != EOF) {

    if (value[0] == 'd') {
      if (p.top == - 1)
      {
        printf ("NULL\n");
      } 
      else
      { 
        printf ("%s\n", p.pilha[p.top]);
        p.top = p.top - 1;
      }
    } 
    else 
    {

      p.top = p.top + 1;
      for (int i=0; i<STRING_MAXSIZE; i++) {
        p.pilha[p.top][i] = value[i+8];

        if(value[i] == '\0') break;
      }
    }
    
  }

  return 0;
}