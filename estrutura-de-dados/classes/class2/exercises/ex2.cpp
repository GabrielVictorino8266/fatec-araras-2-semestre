#include <iostream>
using namespace std;

string recebeEndereco();
string recebeNomeCompleto();
int recebeParcelas();
double recebeValorCompra();

struct Cliente{
    string nome_completo;
    string endereco;
    int parcelas;
    double valor_compra;
    double valor_parcelado;
};

int main(int argc, char *argv[]){
    int QTDE_CLIENTES = 1;

    struct Cliente clientes[QTDE_CLIENTES];

    // captura informacoes compra do cliente
    for(int i =0; i<QTDE_CLIENTES;i++){
        clientes[i].nome_completo = recebeNomeCompleto();
        clientes[i].endereco = recebeEndereco();
        clientes[i].parcelas = recebeParcelas();
        clientes[i].valor_compra = recebeValorCompra();
        clientes[i].valor_parcelado = clientes[i].valor_compra / clientes[i].parcelas;
    }

    // exibe as informaçoes do cliente
    for(int i = 0;i<QTDE_CLIENTES;i++){
        cout << "\n\n";
        cout << "Cliente: " << clientes[i].nome_completo << endl;
        cout << "Endereco: " << clientes[i].endereco << endl;
        cout << "Parcelas: " << clientes[i].parcelas << endl;
        cout << "Valor Total da compra: " << clientes[i].valor_compra << endl;
        cout << "Valor final parcelado: R$ " << clientes[i].valor_parcelado;
    }

    return 0;
}

string recebeNomeCompleto(){
    string nome_completo;

    cin.ignore();
    cout << "Informe o nome completo: ";
    getline(cin, nome_completo);

    return nome_completo;
}

string recebeEndereco(){
    string endereco;

    cin.ignore();
    cout << "Informe o endereco completo: ";
    getline(cin, endereco);

    return endereco;
}

int recebeParcelas(){
    int parcelas;

    cin.ignore();
    cout << "Informe a qtde de parcelas: ";
    cin >> parcelas;

    return parcelas;
}

double recebeValorCompra(){
    double valor_compra;
    
    cin.ignore();
    cout << "Informe o valor da compra: ";
    cin >> valor_compra;

    return valor_compra;
}

