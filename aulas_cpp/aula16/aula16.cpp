#include <iostream>

using namespace std;

int main(){

    int cont;

    // comando de loop  do while

    cont = 20;
    do{
        cout << "verdade - " << cont << "\n";
        cont++;
    }
    while(cont < 20);

    cout << "\nRotina Finalizada\n";

    return 0;
}
