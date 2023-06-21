#include <iostream>

using namespace std;

void trocaValores(int *num1, int *num2);

// Escreva uma função que recebe dois ponteiros para inteiros e troca os valores entre as variáveis apontadas.

int main(){
    int num1, num2;

    num1 = 1;
    num2 = 2;

    cout << "Valores iniciais: \n" << "num1= " << num1 << "\n" << "num2= " << num2 << endl;

    trocaValores(&num2, &num1);

    cout << "\nValores invertidos: \n" << "num1= " << num1 << "\n" << "num2= " << num2 << endl;

    return 0;
}

void trocaValores(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
