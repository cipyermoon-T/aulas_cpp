#include <iostream>

using namespace std;

void soma(), soma(int n1, int n2);

int main(){

    soma(20, 30);
    soma();

    return 0;
}


void soma(int n1, int n2){
    int res;
    res = n1 + n2;
    cout << "\nSoma de n1 + n2 é: " << res << "\n";
}

void soma(){
    int n1, n2, res;
    n1 = 10;
    n2 = 20;
    res = n1 + n2;
    cout << "\nSoma de n1 + n2 é: " << res << "\n";
}
