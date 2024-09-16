#include <iostream>
#include <string>

using namespace std;

struct Disciplina_s{
    string nome;
    string dia_semana;
    string horario_frequencia;
};

struct Aluno_s{
    string nome;
    string ra;
    string curso;
    Disciplina_s *disc_ptr;
    int qtde_disciplinas;
};

//functions
void cadastroDisciplinas(Aluno_s &aluno){
    aluno.disc_ptr = new Disciplina_s[aluno.qtde_disciplinas];

    while(aluno.qtde_disciplinas > 7 || aluno.qtde_disciplinas < 0){
        cout << "!!!!!!!!!Digite uma qtde de disciplinas menor que 7.!!!!!!!!!\n";
        cin >> aluno.qtde_disciplinas;
    }

    for(int i = 0;i < aluno.qtde_disciplinas;i++){
        cout << "*************CADASTRO DISCIPLINA " << i + 1 << "*************\n\n";
        cout << "Nome da disciplina: \n";
        cin.ignore();  // Limpa o buffer
        getline(cin, aluno.disc_ptr[i].nome);  // Usa o índice para acessar as disciplinas

        cout << "Horario da disciplina: \n";
        getline(cin, aluno.disc_ptr[i].horario_frequencia);

        cout << "Dia da semana da disciplina: \n";
        getline(cin, aluno.disc_ptr[i].dia_semana);
    };
};

void cadastrarAluno(Aluno_s *aluno){
    cout << "Nome do aluno: \n";
    cin.ignore();
    getline(cin, aluno->nome);

    cout << "Ra do aluno: \n";
    getline(cin, aluno->ra);

    cout << "Curso do aluno: \n";
    getline(cin, aluno->curso);

    cout << "Informe a qtde disciplinas do aluno: \n";
    cin >> aluno->qtde_disciplinas;

    cadastroDisciplinas(*aluno);

};

void exibirInfo(Aluno_s aluno){
    cout << "Nome aluno: " << aluno.nome << endl;
    cout << "RA aluno: " << aluno.ra << endl;
    cout << "Curso do aluno: " << aluno.curso << endl;
    cout << "Qtde de disciplinas aluno: " << aluno.qtde_disciplinas << endl;
    
    for(int i = 0; i < aluno.qtde_disciplinas;i++){
        cout << "*****EXIBINDO DISCIPLINA " << i + 1 << "*****\n\n";
        cout << "Nome disciplina: " << aluno.disc_ptr[i].nome << endl;
        cout << "Horario disciplina: " << aluno.disc_ptr[i].horario_frequencia << endl;
        cout << "Dia semana : " << aluno.disc_ptr[i].dia_semana << endl;
    }

}

int main(){
    int qtde_alunos;
    
    cout << "Informe a qtde de alunos: " << endl;
    cin >> qtde_alunos;

    Aluno_s *aluno = new Aluno_s[qtde_alunos];//criei e aloquei aluno
    
    //cadastro
    for(int i =0;i < qtde_alunos;i++){
        cout << "*************CADASTRO DO ALUNO # " << i + 1 << "*************" << endl;
        cadastrarAluno(&aluno[i]);
    }

    //exibir
    for(int i =0;i < qtde_alunos;i++){
        cout << "*************CADASTRO DO ALUNO # " << i + 1 << "*************" << endl;
        exibirInfo(aluno[i]);
    }

    for(int i =0;i < qtde_alunos;i++){
        delete[] aluno[i].disc_ptr;
    }

    delete[] aluno;
    return 0;
}