#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha Pilha;
typedef Pilha * apontaPilha;

apontaPilha criaPilha(int tamanho);

struct pilha {
  char *v;
  int topo;
  int tamanho;
};

apontaPilha criaPilha(int tamanho) {
  apontaPilha p = malloc(sizeof(Pilha));
  p->v = malloc(tamanho * sizeof(Pilha));
  p->topo = 0;
  p->tamanho = tamanho;

  return p;
}

int pilhaCheia(Pilha *p) {
  if (p->topo > p->tamanho)
    return 1;
  return 0;
}

int pilhaVazia(Pilha *p) {
  return (p->topo == 0);
}

void empilha(Pilha *p, char elemento) {
  if (!pilhaCheia(p)) {
    p->v[p->topo] = elemento;
    p->topo++;
  }
}

char desempilha(Pilha *p) {
  if (!pilhaVazia(p)) {
    p->topo--;
    return p->v[p->topo];
  }
  else
    return '\0';
}

int topo(Pilha *p) {
  return p->topo;
}

char eleTopo(Pilha *p) {
  return p->v[p->topo - 1];
}

int bemFormada(char v[]) {
  int tamanho = strlen(v);
  Pilha *p = criaPilha(tamanho);

  for (int i = 0; i < tamanho; i++) {
    char c = v[i];
    if (c == '{' || c == '[' || c == '(') {
      empilha(p, c);
      } else if (c == '}' || c == ']' || c == ')') {
        if (pilhaVazia(p)) {
          return 0;
        }
        char t = desempilha(p);
        if ((c == '}' && t != '{') || (c == ']' && t != '[') || (c == ')' && t != '(')) {
          return 0;
        }
      }
  }
  int vazio = pilhaVazia(p);
  return vazio;
}

int main() {
  char v[500];
  scanf("%499s", v);

  if (bemFormada(v)) {
    printf("sim\n");
  } else {
    printf("nao\n");
  }

  return 0;
}