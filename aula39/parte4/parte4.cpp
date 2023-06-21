#include <iostream>

using namespace std;

int main(){

    // vetories dinamicos
    double * triplo = new double [3];
    triplo[0] = 0.2;
    triplo[1] = 0.5;
    triplo[2] = 0.8;

    cout << "triplo[1] = " << triplo[1] << endl;
    triplo++; // incrementa o ponteiro
    cout << "agora triplo[0] = " << triplo[0] << endl;
    cout << "agora triplo[1] = " << triplo[1] << endl;
    triplo--; // retorna ao inicio

    delete [] triplo; // libera a memoria

    return 0;
}
