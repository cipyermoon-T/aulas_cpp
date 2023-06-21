#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int potencia;
    int velMax;
    int vel;

    void insere(string stNome, string stCor, int stPotencia, int stVelMax){
        nome = stNome;
        cor = stCor;
        potencia = stPotencia;
        velMax = stVelMax;
        vel = 0;
    }

    void mostra(){
    cout << "Nome do carro............: " << nome << endl;
    cout << "Cor do carro.............: " << cor << endl;
    cout << "Potencia do carro........: " << potencia << endl;
    cout << "Velocidade atual do carro: " << vel << endl;
    cout << "Velociade Maxima.........: " << velMax << "\n" << endl;
    }

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
            vel = velMax;
        }
        if(vel < 0){
            vel = 0;
        }
    }
};

int main(){

    Carro car1, car2, car3, car4;

    car1.insere("Skyline GTR", "Vermelho", 450, 350);

    car1.mostra();
    car1.mudaVel(400);
    car1.mostra();


    return 0;
}
