#include <iostream>

using namespace std;

void imp(string txt="Taz mania"); // estou deixando um valor padrão

int main(){

    imp("Youtube");

    return 0;
}

void imp(string txt){
    cout << "\n" << txt << "\n";
}
