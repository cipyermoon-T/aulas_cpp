#include <iostream>
//#include <cstdlib>

using namespace std;

int main(){

    int n1, n2, n3, res;
    char opc;

    inicio:

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    cout << "Digite o valor da nota 3: ";
    cin >> n3;

    res = (n1 + n2 + n3)/3;

    if(res >= 7){
        cout << "\nVoce foi aprovado\nMedia: " << res;
    }
    else if (res >= 4){
        cout << "\nAluno de recuperação\nMedia: " << res;
    }
    else{
        cout << "\nAluno reprovado\nMedia: " << res;
    }

    cout << "\nDigitar outras notas? [s/n]: \n";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        system("clear"); // para o windows é cls e precisa da biblioteca cstdlib
        goto inicio;
    }

    return 0;
}
