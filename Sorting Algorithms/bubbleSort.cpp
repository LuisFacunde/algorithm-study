#include <iostream>

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
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

    bubbleSort(data, tamanho); // Ou insertionSort(data, tamanho); ou selectionSort(data, tamanho);

    std::cout << "Array ordenado usando Bubble Sort: \tamanho";
    printArray(data, tamanho);

    return 0;
}