#include <iostream>

using namespace std;

void mudarValor(int * p);

int main(){

    int num = 10;
    int* ptr = &num;

    cout << "Elemento para que o ponteiro está apontando: " << *ptr << endl;
    cout << "Memoria que o ponteiro esta guardando: " << ptr << endl << endl;

    *ptr = 20;

    cout << "Elemento para que o ponteiro está apontando: " << *ptr << endl;
    cout << "Memoria que o ponteiro esta guardando: " << ptr << endl << endl;

    mudarValor(&num);

    cout << "Elemento para que o ponteiro está apontando: " << *ptr << endl;
    cout << "Memoria que o ponteiro esta guardando: " << ptr << endl;

    return 0;
}

void mudarValor(int* ptr){
    *ptr = 30;
}
