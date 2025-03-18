#include <stdio.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {           // Itera sobre o array
        for (int j = 0; j < n - i - 1; j++) {  // Itera sobre os elementos restantes
            if (arr[j] > arr[j + 1]) {        // Se o elemento atual é maior que o próximo
                swap(&arr[j], &arr[j + 1]);  // Troca os elementos
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {   // Itera sobre o array
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// função principal
int main() {

    // Recebe o número de elementos
    int n;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Recebe os elementos do array
    int arr[n];
    printf("Digite os elementos do array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Imprime o array original
    printf("Lista original: ");
    printArray(arr, n);

    bubbleSort(arr, n);     // Ordena o array usando Bubble Sort

    // Imprime o array ordenado
    printf("Lista ordenada: ");
    printArray(arr, n);

    return 0;
}