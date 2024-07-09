#include <stdio.h>

int busca_binaria_recursiva(int v[], int x, int esquerda, int direita) {
    if (esquerda > direita) {
        return -1;  // Elemento não encontrado
    }

    int meio = (esquerda + direita) / 2;

    if (v[meio] == x) {
        return meio;  // Encontramos o elemento
    }

    if (v[meio] < x) {
        return busca_binaria_recursiva(v, x, meio + 1, direita);
    } else {
        return busca_binaria_recursiva(v, x, esquerda, meio - 1);
    }
}

int main() {
    int vetor[] = {12, 96, 20, 4, 2, 8, 16, -1};
    int chave = 8;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int indice = busca_binaria_recursiva(vetor, chave, 0, tamanho - 1);

    if (indice != -1) {
        printf("Chave %d encontrada no índice %d.\n", chave, indice);
    } else {
        printf("Chave %d não encontrada no vetor.\n", chave);
    }

    return 0;
}
