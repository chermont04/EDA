#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int strDist(char* str, char* sub) {
  if(strlen(str) < strlen(sub)) 
    return 0;
  else if(strlen(str) == strlen(sub)) {
    if(strcmp(str, sub) == 0) {
      return strlen(str);
    }
    else {
      return 0;
    }
  }
  else{
    int len = strlen(sub);
    char first[] = str.substring(0,len);
    char last[] = str.substring(strlen(str) - len);
    if(first.equals(sub) && last.equals(sub)) {
      return strlen(str);
    }
    else if(first.equals(sub) && !last.equals(sub)) {
      return strDist(str.substring(0, strlen(str)-1),sub);
    }
    else if(!first.equals(sub) && last.equals(sub)) {
      return strDist(str.substring(1), sub);
    }
    else {
      return strDist(str.substring(1, strlen(str)-1), sub);
    }
  }
}

int main() { 
  char str[101];
  char sub[101];

  fgets(str);
  setbuf(stdin, NULL);
  fgets(sub);
  setbuf(stdin, NULL);

  printf("%d\n", strDist(str, sub));
}


