#include <iostream>

void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int key = vetor[i];
        int j = i - 1;
        /* Move os elementos de vetor[0..i-1] que são maiores que key
           para uma posição à frente de sua posição atual */
        while (j >= 0 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
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

    insertionSort(data, tamanho);

    std::cout << "Array ordenado usando Bubble Sort: \tamanho";
    printArray(data, tamanho);

    return 0;
}