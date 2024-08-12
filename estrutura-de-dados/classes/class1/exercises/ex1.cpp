#include <iostream>

using namespace std;

void soma(int n);

int main(int argc, char *argv[] ){
    int n;
    
    cout << "Informe numero 1: ";
    cin >> n;
    
    
    soma(n);

    return 0;
}


void soma(int n){
    int soma;
    for(int i = 1; i<=n;i++){
        soma += i;
    };

    cout << "Valor final da soma: " << soma; 

}