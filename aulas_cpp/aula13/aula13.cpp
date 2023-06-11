#include <iostream>

using namespace std;

int main(){
    inicio:
    int valor;
    char opc;

    cout << "Selecione um transporte:\n";
    cout << "[1]=carro, [2]=moto, [3]=aviao, [4]=helicoptero\n";
    cin >> valor;

    switch(valor){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(valor){
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2:
                    cout << "Moto selecionada\n";
                    break;

            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte Aereo\n";
            switch(valor){
                case 3:
                    cout << "Aviao selecionado\n";
                    break;
                case 4:
                    cout << "Helicoptero selecionado\n";
                    break;

            }
            break;

        default:
            cout << "Valor selecionado invalido\n";
    }

    cout << "Deseja voltar ao começo? [s/n]\n";
    cin >> opc;
    if(opc == 's' || opc == 'S'){
        system("clear");
        goto inicio;
    }

    return 0;
}
