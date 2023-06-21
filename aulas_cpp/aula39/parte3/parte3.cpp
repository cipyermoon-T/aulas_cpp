#include <iostream>

using namespace std;

void exibir (int * p);
void processar(int* p);

int main (){

    int* ptr = new int;
    *ptr = 40;

    processar(ptr);
    exibir(ptr);
    delete ptr;

    return 0;
}

void processar(int* p){
    cout << p << endl;
    cout << * p << endl;
}

void exibir (int * p){
    cout << *p << endl;
}
