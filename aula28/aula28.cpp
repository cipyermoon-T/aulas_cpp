#include <iostream>
#include<stack>

using namespace std;

int main(){

    stack <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    if(cartas.empty()){ // pode ser usado com size também.
        cout << "pilha vazia" << endl;
    }
    else{
        cout << "pilha com cartas." << endl;
    }

    while(!cartas.empty()){
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cout << "Carta do topo: " << cartas.top() << endl;

    cartas.pop();
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << endl;

    push(); //insere valores na pilha
    pop(); // tira valores da pilhas
    top(); // mostra o valor que está no topo da pilha
    size(); // mostra o tamanho da pilha
    empty(); // retorna verdadeiro ou falso caso a pilha esteja vazia ou não

    return 0;
}
