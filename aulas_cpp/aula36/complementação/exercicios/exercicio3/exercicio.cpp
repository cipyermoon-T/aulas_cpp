#include <iostream>

using namespace std;

int maiorNum(int* arr, int tamanho);

// Verificar número máximo: Escreva uma função que recebe um ponteiro para um array de inteiros e o tamanho do array. A função deve encontrar e retornar o maior número do array.

int main(){

    int arr[] {1, 2, 3, 4, 5};
    int tamanho, maior;
    tamanho = sizeof(arr) / sizeof(arr[0]);

    maior = maiorNum(arr, tamanho);

    cout << "O maior numero é: " << maior << endl;

    return 0;
}

int maiorNum(int* arr, int tamanho){
    int maior = *arr;
    for (int i = 0; i < tamanho; i++) {
        if ( *arr > maior){
           maior = *arr;
        }
        arr++;
    }
    return maior;
}

