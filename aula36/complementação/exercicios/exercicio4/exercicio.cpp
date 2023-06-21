#include <iostream>

using namespace std;

void ordenarArray(int* arr, int tamanho);

// Função que recebe um ponteiro para um array de inteiros e o tamanho do array.
// A função ordena os elementos do array em ordem crescente.

int main() {
    int arr[] = {5, 2, 4, 1, 3};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    ordenarArray(arr, tamanho);

    cout << "Array ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void ordenarArray(int* arr, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap dos elementos
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
