/* Disciplina: Programaçao Estruturada e Modular
Prof. Carlos Veríssimo                                    
--------------------------------------------------------
Objetivo do Programa: Bubble Sort-Implementação 
Data - 27/08/2024                                                
Autores: Julio Cesar Santana - RA 2040482312048 */

--------------------------------------------------------
#include <stdio.h>

// Função para trocar dois elementos de lugar
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que implementa o Bubble Sort
void bubbleSort(int array[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                trocar(&array[j], &array[j+1]);
            }
        }
    }
}

// Função para imprimir o array
void imprimirArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int n;

    // Solicitar a quantidade de elementos
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Criar o array e solicitar os elementos
    int array[n];
    printf("Digite os %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Mostrar o array original
    printf("Array original:\n");
    imprimirArray(array, n);

    // Ordenar o array usando Bubble Sort
    bubbleSort(array, n);

    // Mostrar o array ordenado
    printf("Array ordenado:\n");
    imprimirArray(array, n);

    return 0;
}