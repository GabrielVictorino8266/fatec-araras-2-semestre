public class Pessoas {
    private String nome;
    private int idade;
    private float peso;
    private float altura;

    //Setters
    void setPeso(float p) {
        this.peso = p;
    }

    void setAltura(float a) {
        this.altura = a;
    }

    void setNome(String n) {
        this.nome = n;
    }

    void setidade(int i) {
        this.idade = i;
    }

    //Getters
    float getPeso() {
        return this.peso;
    }

    float getAltura() {
        return this.altura;
    }

    double getIMC(){
        float imc;
        imc = (this.peso / (this.altura * this.altura));
        return imc;
    }

    void mostrarMenu(){
        System.out.println("\n|-----------------------------TABELA IMC-------------------------------------|");
        System.out.println("|           **CALCULO**       |       **SITUAÇÃO**                           |");
        System.out.println("|1 - ABAIXO DE 18,5           | Você está abaixo do peso ideal.              |");
        System.out.println("|2 - ENTRE 18,5 - 24,9        | Parabéns, peso normal!                       |");
        System.out.println("|3 - ENTRE 25,0 - 29,9        | Sobrepeso, você está acima do peso.          |");
        System.out.println("|4 - ENTRE 30,0 - 34,9        | Obesidade grau 1.                            |");
        System.out.println("|5 - ENTRE 35,0 - 39,9        | Obesidade grau 2.                            |");
        System.out.println("|6 - 40,0 ACIMA               | Obesidade grau 3.                            |");
        System.out.println("|---------------------------------------------------------------------------|\n");

        System.out.println("*******Seu resultado: " + getIMC());
    }

}