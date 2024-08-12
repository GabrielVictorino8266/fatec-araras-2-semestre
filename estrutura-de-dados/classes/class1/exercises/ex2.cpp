#include <iostream>

using namespace std;

int f_soma(int n);

int main(int argc, char *argv[]){
    int n;
    int soma;

    cout << "Informe o numero maximo para a soma: " << endl;
    cin >> n;

    soma = f_soma(n);

    cout << soma;
    return 0;
}


int f_soma(int n){
    if(n == 0){
        cout << "Soma chegou ao final. O valor final e: " << endl;
        return 0;
    }else{
        return n + f_soma(n-1);
    }

}