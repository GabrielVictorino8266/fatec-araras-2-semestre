class Professores extends Funcionario{
    String curso;

    Professores(String n, int m, float s, String c){
        super(n, m, s);//chama o construtor da superclasse
        curso = c;
    }

    
    public String toString(){// chamado automaticamento quando printamos o objeto.
        String saida  = "Nome......" + nome + "\n";
        saida += "Matricula: " +  matricula + "\n";
        saida += "Salario..:" + salario + "\n";
        saida += "Curso....:" + curso;

        return saida;
    }

    // void setCurso(String c){
    //     curso = c;
    // }

    String getCurso(){
        return curso;
    }
}