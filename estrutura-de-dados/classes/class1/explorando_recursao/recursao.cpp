// Funcao recursiva é aquela que chama ela mesma.

#include <iostream>

using namespace std;

void recursao();


int main(int argc, char *argv[]){
    recursao();

}


void recursao(){
    cout << "Recursao em cpp." << endl;
    recursao();
}