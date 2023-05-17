#include <stdio.h>
#include <stdlib.h>

void insertionSort(int reliquias[], int quantidade) {
  // TODO: Implemente o algoritmo de ordenação "Insertion Sort".
  for(int j = 1; j < quantidade; j++){
    int menor = reliquias[j];
    int i = j - 1;

    // Move os elementos maiores para a direita
    while (i >= 0 && reliquias[i] > menor) {
      reliquias[i + 1] = reliquias[i];
      i--;
    }

    // Insere o elemento atual na posição correta
    reliquias[i + 1] = menor;
  }

  // Trata o primeiro elemento do vetor
  if (reliquias[0] > reliquias[1]) {
    int maior = reliquias[0];
    int menor = reliquias[1];
    reliquias[0] = menor;
    reliquias[1] = maior;
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int  reliquias[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", & reliquias[i]);
  }

  // Executa o algoritmo "insertionSort" para ordenar os "reliquias".
  insertionSort(reliquias, quantidade);

  // Imprime as "reliquias" ordenados
  for (int i = 0; i < quantidade; i++) {
    printf("%d ",  reliquias[i]);
  }
  return 0;
}