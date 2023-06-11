#include <iostream>

using namespace std;

int main(){

    char palavra[30], secreta[30], letra[1]; // palavra armazena a palavra normal, secrea armazena apenas asteriscos para sensurar a palavra e letra armazena a letra que o usuario digitar
    int i, tam, chances, acertos; // i é o indice, tamanho seria o tamanho da palavra, acertos para comparar com o numero de letras acertadas e ver se venceu
    bool acerto; //bool acerto para indicar se o acerto foi verdadeiro ou falso

    chances = 6; // demos 6 chances para o usuario;
    tam = 0;
    i = 0;
    acertos = 0;
    acerto = false; // bool começa com false pois obviamente o usuario ainda nao acertou nada

    cout << "Digite uma palavra: ";
    cin >> palavra;
    system("clear");

    while(palavra[i] != '\0'){ // este while serve para saber quais são as letras vazias, o \0 desconsidera os espaços vazios e usa os que realmente estão sendo usados
        i++;
        tam++; // tamanho sendo incrementado cada vez que o while roda, fazendo com que conte o tamanho da letra indiretamente
    }

    for(i = 0; i < 30; i++){
        secreta[i] = '*'; // este for substitui todos os espaços por asteriscos
    }

    while((chances > 0) && (acertos < tam)){ // enquanto as chances forem maior que 0 e acertos menor que o tamanho da letra, prosseguir com o programa
        cout << "Chances: " << chances << "\n";
        cout << "Palavra secreta: ";
        for(i = 0; i < tam; i++){
            cout << secreta[i]; // imprime os asteriscos baseados na posiçaõ em que a variavell tam salvou
        }
        cout << "\nDigite uma letra :";
        cin >> letra[0];
        for(i = 0; i < tam; i++){
            if(palavra[i] == letra[0]){ // for e if, o for roda dependendo pelo tamanho da letra, no caso "batata" roda 6 vez verificando letra por letra
                acerto = true;  // nas 6 verificações ele olha se a letra que o usuario digitou é igual a alguma que contem na palavra e marca acerto como verdadeiro
                secreta[i] = palavra[i]; // e substitui o asterico da variavel secreta pela a array da palavra
                acertos++; // caso seja verdadeiro, conta como um acerto para a verficação do while
            }
        }
        if(!acerto){
            chances--; // se nenhuma das letras conter a letra que o usuario digitou ele sai do for e vai pra outro if, caso o acerto seja falso, ele diminui as chances do usuario
        }
        acerto = false; //toda vez que entra no for e uma letra for true, vai ficar salvo na variavel, se não informar false novamente o progama pode bugar e dizer que voce acertou todas as letras
        system("clear");
    }
    // aqui a função while acabou, ou porque o usuario esgotou as chances ou porque acertou todas as letras da palavra
    if(acertos == tam){ //então o if veficia se o usuario venceu, se a quantidade de acertos for do mesmo tamanho da palavra significa que o usuario acertou tudo.
        cout << "Voce venceu!!";
    }
    else{ // caso contrario, obviamente ele perdeu
        cout << "Voce perdeu!!";
    }

    return 0;
}
