#include <iostream>
#include <string>

using namespace std;

int recebeAnoCarro();
string recebeModelo();
string recebePlaca();
double recebeValor();

struct Carro{
    string modelo;
    string placa;
    string fabricante;
    int ano;
    double valor;
};


int main(int argc, char *argv[]){
    int QTDE_CARROS = 2;

    struct Carro carros[QTDE_CARROS];

    // get the info of multiple cars
    for(int i = 0; i < QTDE_CARROS;i++){
        carros[i].modelo = recebeModelo();
        carros[i].placa = recebePlaca();
        carros[i].ano = recebeAnoCarro();
        carros[i].valor = recebeValor();
    }
    
    //display the info of multiple cars
    for(int i = 0; i<QTDE_CARROS;i++){
        cout << "\n \n";
        cout << "Este e o carro: " << i+1 << endl;
        cout << "Modelo: " << carros[i].modelo << endl;
        cout << "Ano: " << carros[i].ano << endl;
        cout << "Valor: " << carros[i].valor << endl;
        cout << "Placa: " << carros[i].placa << endl;
    }

    return 0;
}

string recebeModelo(){
    string modelo_nome;
    
    cin.ignore();
    cout << "Informe o nome do modelo: ";
    getline(cin, modelo_nome);

    return modelo_nome;
}

string recebePlaca(){
    string placa_carro;
    
    cin.ignore();
    cout << "Informe a placa do veiculo: ";
    getline(cin, placa_carro);

    return placa_carro;
}

int recebeAnoCarro(){
    int ano_carro;
    
    cin.ignore();
    cout << "Informe o ano do carro: ";
    cin >> ano_carro;

    return ano_carro;
}

double recebeValor(){
    double valor_carro;

    cin.ignore();
    cout << "Informe o valor do carro: ";
    cin >> valor_carro;

    return valor_carro;
}