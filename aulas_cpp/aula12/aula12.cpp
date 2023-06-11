#include <iostream>

using namespace std;

int main(){

    // (expressão) ? valor1 : valor2;

    // int n1, n2, nota;
    int n1,x;
    //string res;
    x = 5;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    /* cout << "Digite a segunda nota: ";
    cin >> n2; */

    // nota = n1 + n2;

    // (nota >= 60) ? res="Aprovado" : res="Reprovado";
    //res = (nota >= 60) ? "Aprovado":"Reprovado";

    (n1 >= 10) ? x++ : x--;

    cout << "\nNovo valor do x: " << x << "\n";

    return 0;
}
