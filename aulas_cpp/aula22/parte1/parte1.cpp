#include <iostream>

using namespace std;

void texto(), soma(int n1, int n2), tr(string tra[4]);
int soma2(int n1, int n2);

int main(){

    int res;
    string transp[4]={"carro", "moto", "barco", "aviao"};

    soma(15, 5);
    res = soma2(175, 25);

    cout << "O valor de res: " << res << "\n";
    tr(transp);

    return 0;
}

void texto(){
    cout << "Hello, World!\n";
}

void soma(int n1,int n2){
    cout << "Soma dos valores: " << n1 + n2 << "\n";
}

int soma2(int n1, int n2){
    return n1 + n2;
}

void tr(string tra[4]){
    for(int i = 0; i < 4; i++){
        cout << tra[i] << "\n";
    }
}
