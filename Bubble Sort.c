#include <stdio.h>

// Função para trocar dois elementos de posição
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {           // Itera sobre o array
        for (j = 0; j < n - i - 1; j++) {  // Itera sobre os elementos restantes
            if (arr[j] > arr[j + 1]) {     // Se o elemento atual for maior que o próximo
                swap(&arr[j], &arr[j + 1]); // Troca os elementos de posição
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {   // Itera sobre o array imprimindo cada elemento
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int n;

    // Recebe o número de elementos do usuário
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Declara o array e recebe seus valores
    int arr[n];
    printf("Digite os elementos do array: ");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Imprime o array original
    printf("Lista original: ");
    printArray(arr, n);

    // Chama a função Bubble Sort para ordenar o array
    bubbleSort(arr, n);

    // Imprime o array ordenado
    printf("Lista ordenada: ");
    printArray(arr, n);

    return 0;
}
