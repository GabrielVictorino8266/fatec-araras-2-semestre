#include <iostream>
#include <string>
using namespace std;

string getNomeAluno();
string getRa();
string getCurso();
string getNomeDisciplina();
string getHorario();
string getDiaSemana();

struct Disciplinas{
    string nome;
    string dia_semana;
    string horario;
};

struct Aluno{
    string nome;
    string ra;
    string curso;
    Disciplinas *disciplinas;
    int qtde_disciplinas;
};

int main(){
    string nome, ra, curso, dia_semana, horario, nomeDisc, horarioDisc, diaSemanaDisc;

    string *nomeAluno_ptr = &nome;
    string *ra_ptr = &ra;
    string *curso_ptr = &curso;
    string *nomeDisc_ptr = &nomeDisc;
    string *horarioDisc_ptr = &horarioDisc;
    string *diaSemanaDisc_ptr = &diaSemanaDisc;

    int qtde_alunos;
    cout << "Informe a quantidade de alunos: \n";
    cin >> qtde_alunos;

    Aluno *alunos = new Aluno[qtde_alunos];

    for(int i = 0; i < qtde_alunos;i++){
        cout << "\n\n*****************ALUNO # " << i + 1 << "*****************\n\n";

        cout << "\nQuantidade de disciplinas do aluno # " << i + 1 << ":\n";
        cin >> alunos[i].qtde_disciplinas;
        alunos[i].disciplinas = new Disciplinas[alunos[i].qtde_disciplinas];


        alunos[i].nome = getNomeAluno();
        alunos[i].ra = getRa();
        alunos[i].curso = getCurso();

        for(int disc = 0; disc < alunos[i].qtde_disciplinas;disc++){
            cout << "Disciplina # " << disc + 1 << "\n";
            alunos[i].disciplinas->nome = getNomeDisciplina();
            alunos[i].disciplinas->horario = getHorario();
            alunos[i].disciplinas->dia_semana = getDiaSemana();
        }
    }

    for(int i = 0;i < qtde_alunos;i++){
        cout << "*****************MOSTRANDO ALUNO # " << i + 1 << "*****************\n\n";
        cout << "Nome aluno: " << alunos[i].nome << "\n";
        cout << "Aluno ra: " << alunos[i].ra << "\n";
        cout << "Aluno ra: " << alunos[i].curso << "\n";

        for(int disc = 0; disc < alunos[i].qtde_disciplinas;disc++){
            cout << "*********************************DISCIPLINAS # " << disc + 1 << "*********************************\n";
            cout << alunos[i].disciplinas[disc].nome << endl;
            cout << alunos[i].disciplinas[disc].horario << endl;
            cout << alunos[i].disciplinas[disc].dia_semana << endl;

            delete[] alunos[i].disciplinas;
        }
    }
    delete[] alunos;
}


string getNomeAluno(string *nomeAluno_ptr) {
    cout << "Informe o nome aluno: \n";
    cin.ignore();
    getline(cin, *nomeAluno_ptr);
}
string getNomeDisciplina() {
    string nomeDisciplina;
    cout << "Informe o nome da disciplina: \n";
    cin.ignore();
    getline(cin, nomeDisciplina);
    return nomeDisciplina;
}

string getRa() {
    string ra;
    cout << "Informe o ra: \n";
    cin >> ra;
    return ra;
}

string getCurso() {
    string curso;
    cout << "Informe o curso: \n";
    cin.ignore();
    getline(cin, curso);
    return curso;
}

string getHorario() {
    string horario;
    cout << "Informe o horario: \n";
    cin >> horario;
    return horario;
}
string getDiaSemana() {
    string dia_semana;
    cout << "Informe o dia da semana: \n";
    cin >> dia_semana;
    return dia_semana;
}