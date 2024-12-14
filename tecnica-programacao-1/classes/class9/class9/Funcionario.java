class Funcionario{
    String nome;
    int matricula;
    float salario;
    
    Funcionario(String n, int m, float s){
        nome = n;
        matricula = m;
        salario = s;
    }

    // void setNome(String n){
    //     nome = n;
    // }

    // void setMatricula(int m){
    //     matricula = m;
    // }

    // void setSalario(float s){
    //     salario = s;
    // }

    String getNome(){
        return nome;
    }

    int getMatricula(){
        return matricula;
    }

    float getSalario(){
        return salario;
    }

}