#include <iostream>

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        // Encontra o índice do elemento mínimo no subarray não ordenado
        int min_index = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[min_index]) {
                min_index = j;
            }
        }

        // Troca o elemento mínimo encontrado com o primeiro elemento não ordenado
        int temp = vetor[i];
        vetor[i] = vetor[min_index];
        vetor[min_index] = temp;
    }
}

void printArray(int vetor[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << vetor[i] << " ";
    std::cout << std::endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(data) / sizeof(data[0]);

    std::cout << "Array original: \tamanho";
    printArray(data, tamanho);

    selectionSort(data, tamanho);

    std::cout << "Array ordenado usando Bubble Sort: \tamanho";
    printArray(data, tamanho);

    return 0;
}