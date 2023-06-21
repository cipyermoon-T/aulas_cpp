#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula, teste;
    list<int>::iterator it;
    int tam;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;
    for(int i = 0; i < tam; i ++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);

    aula.erase(--it);

    // aula.clear();

    aula.merge(teste);

    cout << "Tamanho da lista: " << aula.size() << endl;

    tam = aula.size();
    for(int i = 0; i < tam; i ++){
        cout << aula.front() << endl;
        aula.pop_front();
    }

    cout << "\nTamanho da lista: " << aula.size() << endl;

    return 0;
}
