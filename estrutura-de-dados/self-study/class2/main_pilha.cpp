#include <iostream>
// #include <locale.h>
#include "pilha.h"

using namespace std;

void menu(){
    // setlocale(LC_ALL, "");
    cout << "======================MENU======================\n";
    cout << "0 - Sair do sistema.\n";
    cout << "1 - Insere elemento.\n";
    cout << "2 - Remove elemento.\n";
    cout << "3 - Imprimir a pilha.\n";
    cout << "4 - Tamanho da pilha.\n";
    cout << "5 - Verifica se a pilha está cheia.\n";
    cout << "6 - Verifica se a pilha está vazia.\n";
    cout << "================================================\n";
    cout << "Digite sua opção do menu acima: " << endl;
}

int main(){
    pilha pilha1; // instanciamos classe pilha para pilha1
    TipoItem item;
    int opcao;

    cout << "Programa gerador de pilha!" << endl;

    do{
        menu();
        cin >> opcao;

        switch(opcao){
            case 0:
                return 0;
                break;
            case 1:
                cout << "Digite o elemento a inserir: ";
                cin >> item;
                pilha1.inserir(item);
                cout << endl;
                cout << "Item adicionado com sucesso!" << endl;
                break;
            case 2:
                item = pilha1.remover(); // remove o ultimo elemento
                cout << "Elemento removido: " << item << endl;
                break;
            case 3:
                pilha1.imprimir();
            case 4:
                cout << "Tamanho da pilha e: " << pilha1.qualtamanho() << endl;
                break;
            case 5:
                if(pilha1.estacheia()){
                    cout << "Pilha cheia!!!\n";
                }else{
                    cout << "Pilha não está cheia!\n";
                }
                break;
            case 6:
                if(pilha1.estavazia()){
                    cout << "Pilha está vazia!\n";
                }else{
                    cout << "Pilha não está vazia!\n";
                }
                break;
            default:
                cout << "Digite uma opcao valida do menu." << endl;
                break;
        }
    }
    while(opcao != 0);



    return 0;
}