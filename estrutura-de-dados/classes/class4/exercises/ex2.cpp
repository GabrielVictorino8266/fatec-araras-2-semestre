#include <iostream>
#include <string>

using namespace std;

//functions of clients
string getName();
string getAddress();
string getCity();
string getState();

//function of parcelas
string getData();
string getLocal();
double getValor();

struct Parcelas{
    string data;
    string local;
    double valor;
};

struct Client{
    int qty_parcelas;
    string nome;
    string endereco;
    string cidade;
    string estado;
    double total_amount;
    Parcelas *parcelas;
};

int main(){
    int N_CLIENTS = 2;
    int parcelas_a_pagar = 0;
    
    Client *clientes = new Client[N_CLIENTS];

    for(int i = 0;i < N_CLIENTS;i++){//get the first struct info
        cout << "Starting a new client... " << i+1 << "\n\n" << endl;
        cout << "\n\n Type the parcelas a pagar: " << endl;
        cin >> clientes[i].qty_parcelas;
        if(clientes[i].qty_parcelas > 12 || clientes[i].qty_parcelas < 1){
            cout << "The value typed is not valid. Try again after the program close." << endl;
            return 0;
        }
        
        cout << "-----------------Client #" << i+1 << "-----------------\n\n";
        cout << "Informe q quantidade de parcelas: \n";
        cin >> parcelas_a_pagar;

        clientes[i].parcelas= new Parcelas[parcelas_a_pagar];

        clientes[i].nome = getName();
        clientes[i].endereco = getAddress();
        clientes[i].cidade = getCity();
        clientes[i].estado = getState();  
        clientes[i].total_amount = getValor();

        //calculates the parcela_value
        for(int i_parcelas = 0;i_parcelas < clientes[i].qty_parcelas; i_parcelas++){//get the second struct info
            clientes[i].parcelas[i_parcelas].data = getData();
            clientes[i].parcelas[i_parcelas].local = getLocal();
            clientes[i].parcelas[i_parcelas].valor = clientes[i].total_amount / clientes[i].qty_parcelas;
        };
    };

    for(int i = 0;i < N_CLIENTS;i++){//get the first struct info
        cout << "\nDisplaying the info... \n\n" << endl;       
        cout << "-----------------Client #" << i+1 << "-----------------\n\n";

        cout << "Name: " << clientes[i].nome << endl;
        cout << "Address: " << clientes[i].endereco << endl;
        cout << "City: " << clientes[i].cidade << endl;
        cout << "State: " << clientes[i].estado << endl;
        cout << "Full value: " << clientes[i].total_amount << endl;
        cout << "Qty parcelas: " << clientes[i].qty_parcelas << endl;
        
        //calculates the parcela_value
        for(int i_parcelas = 0;i_parcelas < clientes[i].qty_parcelas; i_parcelas++){//get the second struct info
            cout << "\nDisplay the info of the " << i_parcelas+1 << " parcela...\n\n";
            cout << "Date of parcela: " << clientes[i].parcelas[i_parcelas].data << endl;
            cout << "Local of parcela: " << clientes[i].parcelas[i_parcelas].local << endl;
            cout << "Value of parcela: " << clientes[i].parcelas[i_parcelas].valor << endl;

            delete[] clientes[i].parcelas;
        };
    }

    return 0;
}


string getName(){
    string name;
    cin.ignore();
    cout << "Type the full name here: " << endl;
    getline(cin, name);

    return name;
}

string getAddress(){
    string address;
    cout << "Type the address" << endl;
    cin.ignore();
    getline(cin, address);

    return address;
}

string getCity(){
    string city;
    cin.ignore();
    cout << "Type the city: " << endl;
    getline(cin, city);

    return city;
}

string getState(){
    string state;
    cin.ignore();
    cout << "Type the state: " << endl;
    getline(cin, state);

    return state;
}

//functions to get parcelas info
string getData(){
    string data;
    cout << "Type the data (format: xx/xx/xxxx)" << endl;
    cin >> data;

    return data;
};

string getLocal(){
    string local;
    cin.ignore();
    cout << "Type the local: " << endl;
    getline(cin, local);

    return local;
};

double getValor(){
    double total_amount;
    cout << "Type the FULL valor: " << endl;
    cin >> total_amount;
  
    return total_amount;
};