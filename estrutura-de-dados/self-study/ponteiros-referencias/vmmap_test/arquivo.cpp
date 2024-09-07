#include <iostream>

using namespace std;

int main(){
    const int MAX_SIZE = 1000000000;
    int *array1;
    double *array2;

    //capturar a informação digitada pelo teclado;
    char order;

    //solicitar usuario para entrar com o teclado, assim vamos alocar, desalocar e sair do programa.

    //Passo1: alocando na memoria:
    cout << "Digite 'a', 'd' ou 'e'.\n";
    cin >> order;
    if (order == 'a')
    {
        //vamos alocar dinamicamente com o new para os dois arrays
        array1 = new int[MAX_SIZE];
        array2 = new double[MAX_SIZE];
    }

    cout << "memoria alocada para array1 e array2\n";
    cout << "endereco de array1 e: " << &array1 << endl;
    cout << "endereco de array2 e: " << &array2 << endl;

    


    return 0;
}