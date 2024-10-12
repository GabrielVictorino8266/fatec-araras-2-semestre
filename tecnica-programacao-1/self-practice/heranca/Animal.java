public class Animal{
    String nome;
    int idade;

    Animal(String n, int i){
        nome = n;
        idade = i;
    }

    void falar(){
        System.out.println("Animal faz barulho.");
    }

    void mostrarInfo(){
        System.out.println("Nome: " + nome + "| idade: " + idade);
    }
}