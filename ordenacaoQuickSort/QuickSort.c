#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(int array[], int inicio, int fim){ 
  // TODO: Implemente o algoritmo "Quick Sort" para ordenação.
  // Dica: O método "trocar" pode ser útil ;)
 
  int pivo = array[inicio];
  
  for(int i=inicio; i<fim+1; i++){
	   
	   
	if(pivo<array[i]){ // se o meu pivo for menor que a posicao do vetor
	  if(array[i-1]>array[i]){ // se meu array na pos anterior for maior que na prox
       trocar(&array[i-1],&array[i] ); // coloca o menor valor antes
    } 
	}
	if(pivo>array[i]){// se o meu pivo for maior que a posicao do vetor
		 if(array[i-1]>array[i]){  // se meu array na pos anterior for maior que na prox
       trocar(&array[i-1],&array[i] ); // coloca o maior valor depois

    }
	}
	
  
  }
  
  if(fim-1>=1)
  quickSort(array, inicio, fim-1);
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  
  int inicio = 0;
  int fim = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar as "joias".
  quickSort(joias, inicio, fim);
  
  // Imprime as "joias" ordenadas.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}