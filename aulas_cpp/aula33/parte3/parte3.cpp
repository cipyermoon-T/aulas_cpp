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

    Carro *carros = new Carro[5];

    Carro car1, car2, car3, car4, car5;

    carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;

    carros[0].insere("Skyline GTR", "Vermelho", 450, 350);
    carros[1].insere("Luxo", "Preto", 250, 260);
    carros[2].insere("Familia", "Prata", 150, 180);
    carros[3].insere("Trabalho", "Branco", 80, 120);
    carros[4].insere("Padrao", "Prata", 100, 150);

    for(int i = 0; i < 5; i++){
        carros[i].mostra();
    }

    return 0;
}
