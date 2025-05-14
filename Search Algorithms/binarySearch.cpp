#include <iostream> // Já incluído

void imprimirArray(const char* mensagem, const int arr[], int tamanho) {
    std::cout << mensagem;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Função de Busca Binária (Iterativa)
int buscaBinaria(const int arr[], int tamanho, int elemento) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio = 0;

    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == elemento) {
            return meio;
        }
        if (arr[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

// Função de Busca Binária (Recursiva)
int buscaBinariaRecursiva(const int arr[], int elemento, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == elemento) {
            return meio;
        }
        if (arr[meio] < elemento) {
            return buscaBinariaRecursiva(arr, elemento, meio + 1, fim);
        }
        return buscaBinariaRecursiva(arr, elemento, inicio, meio - 1);
    }
    return -1;
}

int main() {
    std::cout << "\n--- Demonstracao: Busca Binaria ---" << std::endl;
    // Para a busca binária, o array precisa estar ordenado.
    int numerosOrdenados[] = {5, 10, 15, 20, 25, 30};
    int tamanho = sizeof(numerosOrdenados) / sizeof(numerosOrdenados[0]);
    int valorProcurado = 20;

    imprimirArray("Array ordenado: ", numerosOrdenados, tamanho);

    int indice = buscaBinaria(numerosOrdenados, tamanho, valorProcurado);
    if (indice != -1) {
        std::cout << "(Iterativa) Elemento " << valorProcurado << " encontrado no indice: " << indice << std::endl;
    } else {
        std::cout << "(Iterativa) Elemento " << valorProcurado << " nao encontrado." << std::endl;
    }

    indice = buscaBinariaRecursiva(numerosOrdenados, valorProcurado, 0, tamanho - 1);
    if (indice != -1) {
        std::cout << "(Recursiva) Elemento " << valorProcurado << " encontrado no indice: " << indice << std::endl;
    } else {
        std::cout << "(Recursiva) Elemento " << valorProcurado << " nao encontrado." << std::endl;
    }

    valorProcurado = 12;
    indice = buscaBinaria(numerosOrdenados, tamanho, valorProcurado);
     if (indice != -1) {
        std::cout << "Elemento " << valorProcurado << " encontrado no indice: " << indice << std::endl;
    } else {
        std::cout << "Elemento " << valorProcurado << " nao encontrado." << std::endl;
    }

    return 0;
}