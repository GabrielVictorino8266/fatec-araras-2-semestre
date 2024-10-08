/*
 * Exercício para nota 01.
 *
 * Prof. Me. Orlando Saraiva Jr
 * Aplicado em : 28/09/2024
 */

#include <iostream>

#define TAMANHO_PILHA 10

using namespace std;

struct Carro {
    string  placa;
    int     ano;
};

struct Pilha {
    Carro   data[TAMANHO_PILHA];
    int     contador;
};
/* Protótipos das funções. Desenvolver a partir da linha 59 */
void inicializar(Pilha *);
void estacionar(Pilha *, string, int);
void estacionar(Pilha *, Carro);
Carro sair(Pilha *);
void imprime_pilha(Pilha *);
void imprime_tudo(Pilha *);
int quantidade_vagas(Pilha);


int main() {
    Pilha estacionamento;
    inicializar(&estacionamento);
    Carro carro_comum;
    estacionar(&estacionamento,"ABC1234", 1999);
    carro_comum.placa = "DOW5782";
    carro_comum.ano = 2004;
    estacionar(&estacionamento, carro_comum);
    cout << "Quantidade de vagas " << quantidade_vagas(estacionamento) << endl;
    imprime_pilha(&estacionamento);
    estacionar(&estacionamento,"XYZ3215", 2022);
    estacionar(&estacionamento,"WQT2245", 2020);
    estacionar(&estacionamento,"GIN3285", 2017);
    estacionar(&estacionamento,"HIX5215", 2008);
    imprime_pilha(&estacionamento);

    carro_comum = sair(&estacionamento);
    cout << "\nSaiu o carro: " << carro_comum.placa << endl;
    imprime_pilha(&estacionamento);
    cout << "\nQuantidade de vagas " << quantidade_vagas(estacionamento) << endl;
    imprime_tudo(&estacionamento);
}

/* Desenvolver as funções propostas a partir daqui */
void inicializar(Pilha *estacionamento) {
    estacionamento->contador = 0;
    int x;
	for (x = TAMANHO_PILHA-1; x >= 0 ; x--){
		estacionamento->data[x].placa = "AAA0000" ;
        estacionamento->data[x].ano = 0 ;
    }
}

void estacionar(Pilha *estacionamento, string placa, int ano){
    if(estacionamento->contador < TAMANHO_PILHA){
        estacionamento->data[estacionamento->contador].placa = placa;
        estacionamento->data[estacionamento->contador].ano = ano;
        estacionamento->contador++;
    }else{
        cout << "Estacionamento cheio." << endl;
    }
}

void estacionar(Pilha *estacionamento, Carro carro) {
    if (estacionamento->contador < TAMANHO_PILHA) {
        estacionamento->data[estacionamento->contador] = carro;
        estacionamento->contador++;
    } else {
        cout << "Estacionamento cheio." << endl;
    }
}

Carro sair(Pilha *estacionamento) {
    Carro retorno;
    if (estacionamento->contador == 0) {
        cout << "Estacionamento vazio." << endl;
        exit(-1);
    } else {
        estacionamento->contador--; 
        retorno = estacionamento->data[estacionamento->contador];
        estacionamento->data[estacionamento->contador].placa = "XXX0000"; 
        estacionamento->data[estacionamento->contador].ano = 0;
        return retorno;
    }
}
void imprime_pilha(Pilha *estacionamento){
    cout << "\nPILHA DE CARROS" << endl;
    cout << "================\n" << endl;
    for(int x = estacionamento->contador-1; x >= 0;x--){
        if(estacionamento->data[x].ano != 0){
            cout << estacionamento->data[x].placa << "  " << estacionamento->data[x].ano << endl;
        }
    }
}

void imprime_tudo(Pilha *estacionamento){
    cout << "\nTODA A PILHA" << endl;
    cout << "================\n" << endl;
    int x;
    for(x = TAMANHO_PILHA-1; x >= 0;x--){
        cout << estacionamento->data[x].placa << "  " << estacionamento->data[x].ano << endl;
    }
}

int quantidade_vagas(Pilha estacionamento) {
    return TAMANHO_PILHA - estacionamento.contador;
}