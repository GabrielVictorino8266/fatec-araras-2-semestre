#include <iostream>
#include "pilha.h"

using namespace std;

//removemos o ";" de todas as funções

    pilha::pilha() // funcao construtora (mesmo nome da classe)
    {
        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }


    pilha::~pilha() // funcao destrutora
    {
        delete [] estrutura; // como é vetor, usamos []
    }

    
    bool pilha::estacheia() // verifica se a pillha está cheia
    {
        return (tamanho == max_itens);// faz comparacao booleana se é o tamanho da pilha for igual ao maximo de itens
    }


    bool pilha::estavazia() // verifica e a pilha esta vazia
    {
        return (tamanho == 0); // comparacao booleana
    }

    
    void pilha::inserir(TipoItem item) // push
    {
        if(estacheia()){
            cout << "Não é possível inserir este elemento" << endl;
            cout << "Pilha cheia!" << endl;
        }else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    }

    
    TipoItem pilha::remover() // remover
    {
        if(estavazia()){
            cout << "Lista vazia!" << endl;
            cout << "Sem itens para remover" << endl;
            return 0;
        }else{
            tamanho--;
            return estrutura[tamanho];  
        }
    }

    
    void pilha::imprimir() // print
    {
        cout << "Pilha: [ ";

        for(int e = 0; e<tamanho;e++){
            cout << estrutura[e] << " ";
        }

        cout << "]" << endl;
    }


    int pilha::qualtamanho() // lenght
    {
        return tamanho;
    }