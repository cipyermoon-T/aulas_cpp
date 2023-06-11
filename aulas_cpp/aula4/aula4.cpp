#include <iostream>
using namespace std;

int main(){

    // tipo e nome da variavel e tbm o valor (TIPO NOME = VALOR)
    int vidas = 0; // vai receber numeros inteiros - 1,2,3,4....
    char letra = 'B'; // receber characteres tamanho de 1 byte - 'B'
    double decimal = 5.2; // receber numeros decimais, numero quebrados - 2,5
    float decimal2 = 5.2; // também recebe numeros decimais, porem a precisão menor
    bool vivo = true; // true ou false - verdadeiro ou falso respectivamente
    string nome = "Taz"; // string recebe um texto maior, o char so recebe 1 character ou quantos você definir

    cout << "digite o numero de vidas: ";
    cin >> vidas;

    cout << "digite uma letra: ";
    cin >> letra;

    cout << "dinheiro: ";
    cin >> decimal;

    cout << "digite seu nome: ";
    cin >> nome;

    vidas = 100;

    cout << "\n" << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n"; // pode ser feito todo com apenas um cout

    return 0;
}
