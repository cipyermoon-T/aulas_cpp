#include <iostream>

using namespace std;

int main(){

    int *p;
    int vetor[10];

    p = &vetor[0];
    *p = 10; // vetor[0] = 10 e assim por diante.
    cout << "\n"<< vetor[0] << endl;

    *(p++);
    *p = 20;
    cout << "\n"<< vetor[1]<< endl;

    *(p++);
    *p = 30;
    cout << "\n"<< vetor[2] << endl;

    return 0;
}
