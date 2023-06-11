#include <iostream>
using namespace std;

int main(){

    //int n1, n2;
    //n1 = 0;
    //n2 = 10;

    //cout << n1 << "\n";

    //n1 = n1 + 5;
    //n1+=5;
    //n1*=2;
    //n1/=2;
    //n1--;
    //n1++; pode tanto incrementar quando decrementar, funciona tambem com operações como a multiplicação ou divisão
    // pós fixado =n1++; pré-fixado ++n1;
    //cout << n1 << "\n";


    int n1=10;

    //n1++; com o pós fixado ele primeiro vai ler o valor e somente depois vai fazer a incrementação, fazendo com que o cout leia 10 e não 11
    //++n1; com o pré fixado, ele primeiro incrementa e depois usar valor, fazendo com saia o numero correto 11. (isso em comando por exemplo cout << ++n1;
    // ou seja, se eu usar n1++ ele so mais mostra no proximo output
    // cout << ++n1 << "\n";
    cout << n1++ << "\n";
    cout << n1 << "\n";


    return 0;
}
