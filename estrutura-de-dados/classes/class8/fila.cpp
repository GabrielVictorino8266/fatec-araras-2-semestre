#include <iostream>


using namespace std;

const int MAX_SIZE = 20;

struct Queue{
    int data[MAX_SIZE];
    int frente;
    int ultimo;
    int tamanho;
};

void inicializaFila(Queue *); // trabalhamos com ponteiros de Fila
void mostraFila();
bool eVazio();
bool eCheio();
void adicionar();
void remover();

