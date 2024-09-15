#include <iostream>
#include <string>
using namespace std;

string getSabor();
float getPreco();
string getIngredientes();
int getQuantidade();

struct ingredientesTrufa{
    string nome;
    int quantidade;
};

struct Trufa{
    string sabor;
    float preco;
    ingredientesTrufa *ingredientes;
    int qtde_ingredientes;
};

int main(){
    int qtde_trufas;
    cout << "Informe a quantidade de trufas: \n";
    cin >> qtde_trufas;

    Trufa *trufa = new Trufa[qtde_trufas];

    for(int i = 0; i < qtde_trufas;i++){
        cout << "*****************TRUFA # " << i + 1 << "*****************\n\n";

        cout << "Quantidade de ingredientes únicos trufa # " << i + 1 << ":\n";
        cin >> trufa[i].qtde_ingredientes;
        trufa[i].ingredientes = new ingredientesTrufa[trufa[i].qtde_ingredientes];

        trufa[i].sabor = getSabor();
        trufa[i].preco = getPreco();

        for(int ing = 0; ing < trufa[i].qtde_ingredientes;ing++){
            cout << "Ingrediente # " << ing + 1 << "\n";
            trufa[i].ingredientes->nome = getIngredientes();
            trufa[i].ingredientes->quantidade = getQuantidade();
        }
    }

    for(int i = 0;i < qtde_trufas;i++){
        cout << "*****************MOSTRANDO TRUFA # " << i + 1 << "*****************\n\n";
        cout << "Sabor: " << trufa[i].sabor << "\n";
        cout << "Preco: " << trufa[i].preco << "\n";

        for(int ing = 0; ing < trufa[i].qtde_ingredientes;ing++){
            cout << "*********************************INGREDIENTES # " << ing + 1 << "*********************************\n";
            cout << trufa[i].ingredientes[ing].nome << endl;
            cout << trufa[i].ingredientes[ing].quantidade << endl;

            delete[] trufa[i].ingredientes;
        }
    }
    delete[] trufa;
}


string getSabor() {
    string sabor;
    cout << "Informe o sabor: \n";
    cin.ignore();
    getline(cin, sabor);
    return sabor;
}

float getPreco() {
    float preco;
    cout << "Informe o Preco: \n";
    cin >> preco;
    return preco;
}

string getIngredientes() {
    string Ingredientes;
    cout << "Informe o Ingrediente: \n";
    cin.ignore();
    getline(cin, Ingredientes);
    return Ingredientes;
}

int getQuantidade() {
    int Quantidade;
    cout << "Informe a Quantidade do ingrediente: \n";
    cin >> Quantidade;
    return Quantidade;
}