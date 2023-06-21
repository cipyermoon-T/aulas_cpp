#include <iostream>

using namespace std;

int main(){

    string veiculo = "carro";
    string *pv;

    pv = &veiculo; // ponteiro pv recebe o endereço da variavel veiculo

    cout << pv << "\n" << &veiculo << endl;

    *pv="Moto"; // No endereço apontado por *pv adicione o valor "Moto"

    cout << veiculo << "\n" << *pv << endl;

    return 0;
}
