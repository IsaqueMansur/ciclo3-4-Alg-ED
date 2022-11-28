//alg. insertionSort
//bibliotecas
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int size){ //funcao que imprime o resultado
    int i, j, key; //contadores
    for (i = 1; i < size; i++) { //laço de repetição de acordo com o tamanho do array
        key = arr[i]; //numero atual dentro do array (KEY)
        j = i - 1; //j = indice atual - 1
        while (j >= 0 && arr[j] > key) { //enquanto o indice "j" for maior que 0 e o valor que array[indice "J"] for maior que a key
            arr[j + 1] = arr[j]; //alterar a sequência dos valores 
            j = j - 1; // diminuir o valor do indice "j"
        }
        arr[j + 1] = key; //ajustando o valor para a ordem crescente dentro do array
    }
}

void printArray(int arr[], int size){ //funcao que imprime o resultado
    int i; //contador
    for (i = 0; i < size; i++) // laço de repetição para impressão dos valores
        printf("%d ", arr[i]); //impressão dos valores pós sequenciamento
    printf("\n"); //impressão de espaço pós renderização
}

void main(){
    int arr[] = { 12, 11, 13, 5, 6 }; //array a ser sequanciado
    int size = sizeof(arr) / sizeof(arr[0]); //tamanho do array
    insertionSort(arr, size); //chamando a funcao sequenciadora
    printArray(arr, size);//chamando a funcao que imprime o resultado
}