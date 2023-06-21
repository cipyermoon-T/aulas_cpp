#include <iostream>

using namespace std;

void printNum(char ch);

int main(){

    int* p = new int; // aloca memoria
    *p = 30;
    cout << *p << endl;
    delete p;

    p = new int;
    *p = 50;
    cout << *p << endl;
    delete p;

    printNum('A');

    int * pnum = getNum('A');
    cout << *pnum;

    pnum = getNum('B');

    return 0;
}

void printNum(char ch){
    int * p = new int { ch };
    cout << *p;
    delete p;
}

int * getNum(char ch){
    int * p = new int { ch };
    return p;
}
