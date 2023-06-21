#include <iostream>

using namespace std;

void modificarValor(int* ptr);

int main() {
    int num = 10;
    cout << "Valor inicial: " << num << endl;

    modificarValor(&num); // Passa o endereço de memória de 'num' para a função

    cout << "Valor modificado: " << num << endl;

    return 0;
}

// Função que recebe um ponteiro para um inteiro e o modifica
void modificarValor(int* ptr) {
    *ptr = 20; // Altera o valor apontado pelo ponteiro para 20
}
