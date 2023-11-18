#include <stdio.h>
#define N 5 
// N = número de itens da minha lista, no caso aqui são 5

int main(void) {
  int i, aux, flag;
  int lista[N];

  for (i = 0; i < N; i++) { 
    // N = 10, logo, vai até o índice 9
    printf("Item %d: ", i + 1);
    scanf("%d", &lista[i]);
  }

  flag = 1; // (sinalizador) sinaliza que flag é verdadeiro
  while (flag) {
    // enquanto flag for verdadeiro todas as instruções dentro da estrutura
    // while vão se repetir até que o flag vire falso
    flag = 0; // desliga o sinalizador e verifica se a sequência está ordenada
    for (i = 0; i < N-1; i++) {
      if (lista[i] > lista[i + 1]) {
        // pra deixar em ordem decrescente basta mudar o sinal pra '<' 
        aux = lista[i]; // faz a troca
        lista[i] = lista[i + 1];
        lista[i + 1] = aux;
        flag = 1;
      }
    }
  }
  for (i = 0; i < N; i++) {
    printf("\nItem %d: %d", i + 1, lista[i]);
  }
  return 0;
}