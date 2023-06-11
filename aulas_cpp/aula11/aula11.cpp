#include <iostream>

using namespace std;

int main(){

    int num;
    num = 11;

    /*
    1 2 3 4 5 6 7 8 9 10
    >4 e <7
    <3 ou >8

    if (num == 1) / if(num)
    if (num ==0)  / if(!num)
    if (num != 1) / if(!num)
    */

    if(num >= 10 && num <= 14){
        cout << "Valor aceito: " << num << "\n";
    }
    else{
        cout << "Valor não aceito: " << num << "\n";
    }

    return 0;
}
