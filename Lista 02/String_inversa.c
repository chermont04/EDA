#include<stdio.h>

char reverse_string(char *str) {
  if(*str != 0)
  {
    reverse_string(str + 1);
    putchar(*str);
  }
}

int main() {
  char str[500];
  scanf("%s", &str);

  reverse_string(str);
  printf("\n");

  return 0;
}