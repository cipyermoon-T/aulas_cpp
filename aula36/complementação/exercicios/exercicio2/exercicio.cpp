#include <iostream>

using namespace std;

int calcularSoma(int* arr, int tamanho);

// Função que recebe um ponteiro para um array de inteiros e o tamanho do array.
// A função retorna a soma de todos os elementos do array.

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int soma = calcularSoma(arr, tamanho);

    cout << "A soma dos elementos do array é: " << soma << endl;

    return 0;
}

int calcularSoma(int* arr, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *arr; // soma o valor apontado por arr ao resultado
        arr++; // avança o ponteiro para o próximo elemento do array
    }

    return soma;
}
