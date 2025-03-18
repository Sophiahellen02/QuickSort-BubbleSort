#include <stdio.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de particionamento
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Escolhe o último elemento como pivô
    int i = (low - 1);      // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++;  // Incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);  // Coloca o pivô na posição correta
    return (i + 1);
}

// Função Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Encontra o índice de particionamento
        int pi = partition(arr, low, high);

        // Ordena as sublistas recursivamente
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// função principal
int main() {
    int n;

    // Recebe o número de elementos
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

    quickSort(arr, 0, n - 1);    // Ordena o array usando Quick Sort

    // Imprime o array ordenado
    printf("Lista ordenada: ");
    printArray(arr, n);

    return 0;
}