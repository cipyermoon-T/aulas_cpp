#include <iostream>
#include <queue>

using namespace std;

int main(){

    // empty, size, front, back, push, pop
    queue <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta.: " << cartas.front() << endl;
    cout << "Ultima carta...: " << cartas.back() << endl;

    while(!cartas.empty()){
        cout << "Primeira carta: " << cartas.front() << endl;
        cartas.pop();
    }


    return 0;
}
