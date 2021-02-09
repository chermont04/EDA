/*
primeira linha: testes: inteiro N;
segunda e terceira linha: Nome jogadores; (1-10 letras)
N linhas seguintes 2 inteiros A e B: dedos que cada jogador mostrou (0-5);
primeiro jogador sempre par;
condição de parada = 0;

Saída:
1 linha: "Teste n"
2 linha: nome vencedor;
3 linha: \n;

*/

#include <stdio.h>

int main() {
  int jogadas, testes=0, soma=0;
  int mao1, mao2;

  scanf("%d", &jogadas);

    while (jogadas != 0) {
      int count=0;
      char jogador1[11], jogador2[11];
      int ganhador[1000];

      scanf(" %11s", jogador1);
      scanf(" %11s", jogador2);

      for(int i=0; i < jogadas; i++) {
        scanf("%d %d", &mao1, &mao2);
        soma = mao1 + mao2;

        if ((soma)%2 == 0) {
          ganhador[count] = 1;
        }
        else {ganhador[count] = 2;}

        count++;
      }

      testes++;
      printf("Teste %i\n", testes);
      

      for(int i=0; i < count; i++){
        if(ganhador[i]==1) {
          printf("%s\n",jogador1);
        }
        else {printf("%s\n", jogador2);}
      }

      printf("\n");

      scanf("%d", &jogadas);
    }
  return 0;
}