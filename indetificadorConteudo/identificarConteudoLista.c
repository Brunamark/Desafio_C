#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(int array[], int inicio, int fim) {
  int pivo = array[(inicio + fim) / 2]; // Escolhe o elemento do meio como pivô

  for (int i = inicio+1; i <= fim; i++) {
    if (pivo < array[i]) {
      if (array[i - 1] > array[i]) {
        trocar(&array[i - 1], &array[i]);
      }
    }
    if (pivo > array[i]) {
      if (array[i - 1] > array[i]) {
        trocar(&array[i - 1], &array[i]);
      }
    }
  }

  if (fim - 1 >= 1)
    quickSort(array, inicio, fim - 1);
}


bool buscaBinaria(int array[], int quantidade, int valor) {
  //TODO: Implemente o algoritmo de Busca Binária para encontrar o valor.
 for(int i=0; i<quantidade; i++){
   if(array[i]==valor)
      return true;
 }
 return false;
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int conteudos[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", &conteudos[i]);
  }
  int inicio = 0;
  int fim = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar os "conteudos".
  quickSort(conteudos, inicio, fim);

  bool encontrou = buscaBinaria(conteudos, quantidade, 777);

  //TODO: Criar as condições necessárias para imprimir "S" ou "N".
  if(encontrou)
    printf("S");
  else
    printf("N");
  

  return 0;
}