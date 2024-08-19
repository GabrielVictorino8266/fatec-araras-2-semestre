#include <iostream>
using namespace std;

string recebeNomeProfessor();
string recebeUnidadeEnsino();
int recebeIdadeProfessor();
string recebeRaProfessor();

struct Professor{
    string nome_professor;
    string ra_professor;
    int idade_professor;
    string unidadeEnsino;
};

int main(int argc, char *argv[]){
    int QTDE_PROF;

    cout << "Informe a qtde de professores: ";
    cin >> QTDE_PROF;

    struct Professor professores[QTDE_PROF];

    //capturar
    for(int i = 0; i<QTDE_PROF;i++){
        professores[i].nome_professor = recebeNomeProfessor();
        professores[i].idade_professor = recebeIdadeProfessor();
        professores[i].ra_professor = recebeRaProfessor();
        professores[i].unidadeEnsino = recebeUnidadeEnsino();       
    }

    //mostrar
    for(int i =0; i < QTDE_PROF;i++){
        cout << "Professor: " << professores[i].nome_professor << endl;
        cout << "Idade: " << professores[i].idade_professor << endl;
        cout << "RA: " << professores[i].ra_professor << endl;
        cout << "Undiade de ensino: " << professores[i].unidadeEnsino << endl;
    }



    return 0;
}

string recebeNomeProfessor(){
    string nome_professor;

    cin.ignore();
    cout << "Informe o nome do professor: ";
    getline(cin, nome_professor);

    return nome_professor;
}

int recebeIdadeProfessor(){
    int idade_professor;

    cout << "Informe a idade do professor: ";
    cin >> idade_professor;

    return idade_professor;
}

string recebeUnidadeEnsino(){
    string unidadeEnsino;

    cin.ignore();
    cout << "Informe a unidade de ensino que leciona: ";
    getline(cin, unidadeEnsino);

    return unidadeEnsino;
}

string recebeRaProfessor(){
    string ra_professor;

    cin.ignore();
    cout << "Informe seu RA de professor: ";
    getline(cin, ra_professor);

    return ra_professor;
}