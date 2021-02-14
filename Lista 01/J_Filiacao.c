#include<stdio.h>

struct tipoFiliacao
{
  char nome[80];
  char nomeMae[80];
  char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
  struct tipoFiliacao filiacao;
  int i,j,k;

  for (i = 0; linha[i] != ','; i++) {
    filiacao.nome[i] = linha[i];
  }
  if (linha[i] == ',') {
    filiacao.nome[i] = '\0';
  }
  int aux = 0;
  for (j=i+1; linha[j] != ','; j++) {
    filiacao.nomeMae[aux] = linha[j];
    aux++;
  }
  if(linha[j] == ',') 
    filiacao.nomeMae[aux] = '\0';


  int aux2 = 0;
  for(k=j+1; linha[k] != '\0'; k++) {
    filiacao.nomePai[aux2] = linha[k];
    aux2++;
  }
  
  if(linha[k] == '\0') 
    filiacao.nomePai[aux2] = '\0';
  return filiacao;
}
/*
int main(){
    printf("%s\n", separaLinhaCSV ("Pedro da Silva Pereira,Adriana da Silva,Guilherme Pereira").nome);
    printf("%s\n", separaLinhaCSV ("Pedro da Silva Pereira,Adriana da Silva,Guilherme Pereira").nomeMae);
    printf("%s\n", separaLinhaCSV ("Pedro da Silva Pereira,Adriana da Silva,Guilherme Pereira").nomePai);
    return 0;
}
*/