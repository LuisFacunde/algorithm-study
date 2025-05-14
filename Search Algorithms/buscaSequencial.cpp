#include <iostream>

void imprimirArray(const char* mensagem, const int arr[], int tamanho) {
    std::cout << mensagem;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int buscaSequencial(const int arr[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; ++i) {
        if (arr[i] == elemento) {
            return i; 
        }
    }
    return -1;
}

int main() {
    std::cout << "\n--- Demonstracao: Busca Sequencial ---" << std::endl;
    int numeros[] = {10, 25, 5, 15, 30, 20};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    imprimirArray("Array: ", numeros, tamanho);
    
    int valorProcurado = 15;
    int indice = buscaSequencial(numeros, tamanho, valorProcurado);

    if (indice != -1) {
        std::cout << "Elemento " << valorProcurado << " encontrado no indice: " << indice << std::endl;
    } else {
        std::cout << "Elemento " << valorProcurado << " nao encontrado no array." << std::endl;
    }

    valorProcurado = 100;
    indice = buscaSequencial(numeros, tamanho, valorProcurado);
    if (indice != -1) {
        std::cout << "Elemento " << valorProcurado << " encontrado no indice: " << indice << std::endl;
    } else {
        std::cout << "Elemento " << valorProcurado << " nao encontrado no array." << std::endl;
    }

    return 0;  
}