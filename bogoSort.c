//alg. bogoSort
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_sorted(int *a, int n) //funcao classificadora 
{
  while ( --n >= 1 ) { //decrementando o contador
    if ( a[n] < a[n-1] ) return false; //se verificar que AINDA existe algo fora de sequencia, retornar FALSE
  }
  return true; //se verificar que NÃO existe algo fora de sequencia, retornar TRUE
}
 
void shuffle(int *a, int n) //funcao embaralhadora 
{
  int i, t, r; 
  for(i=0; i < n; i++) { //laco de acordo com length de "n"
    t = a[i]; //declaração do valor de "t" = number[indice]
    r = rand() % n; //declaração do valor de "r" = (aleatório % contador)
    a[i] = a[r]; //declaração de a[indice] = a[random]
    a[r] = t; //declaração de a[random] = t
  }
}
 
void bogosort(int *a, int n) //função bogoSort
{
  while ( !is_sorted(a, n) ) shuffle(a, n); // enquanto não estiver classificado, chamar a funcão embaralhadora (modificadora)
}
 
int main() //funcao principal
{
  int numbers[] = { 1, 10, 9,  7, 3, 0 }; //array de números a ser ordenado
  int i; //contador
 
  bogosort(numbers, 6); //chamando a funcao bogoSort
  for (i=0; i < 6; i++) printf("%d ", numbers[i]); // impressão dos números pós sequencia-los
  printf("\n"); //impressao de espaõ
}