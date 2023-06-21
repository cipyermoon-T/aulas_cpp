#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int potencia;
    int velMax;
};

int main(){

    Carro car1, car2;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.potencia = 450;
    car1.velMax = 350;

    car2.nome = "Skyline GTR";
    car2.cor = "Preto";
    car2.potencia = 800;
    car2.velMax = 400;


    cout << "Nome do carro....: " << car2.nome << endl;
    cout << "Cor do carro.....: " << car2.cor << endl;
    cout << "Potencia do carro: " << car2.potencia << endl;
    cout << "Velociade Maxima.: " << car2.velMax << endl;

    return 0;
}
