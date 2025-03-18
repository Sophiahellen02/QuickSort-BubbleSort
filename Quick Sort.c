#include <stdio.h>

// Função para trocar dois elementos de posição
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de particionamento: reorganiza o array em torno de um pivô
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Escolhe o último elemento como pivô
    int i = (low - 1);      // Índice do menor elemento (inicializado antes da posição inicial)
    int j;
    for (j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô, ele deve ser movido para a esquerda
        if (arr[j] <= pivot) {
            i++;  // Incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]); // Troca os elementos para manter os menores antes do pivô
        }
    }
    swap(&arr[i + 1], &arr[high]);  // Coloca o pivô na posição correta
    return (i + 1);  // Retorna a posição final do pivô
}

// Função recursiva do Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Encontra o índice de particionamento
        int pi = partition(arr, low, high);

        // Chama o Quick Sort para as duas metades do array
        quickSort(arr, low, pi - 1);  // Ordena os elementos menores que o pivô
        quickSort(arr, pi + 1, high); // Ordena os elementos maiores que o pivô
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
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

    // Chama a função Quick Sort para ordenar o array
    quickSort(arr, 0, n - 1);

    // Imprime o array ordenado
    printf("Lista ordenada: ");
    printArray(arr, n);

    return 0;
}
