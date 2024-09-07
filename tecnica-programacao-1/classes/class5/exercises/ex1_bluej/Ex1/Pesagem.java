import java.util.Scanner;

public class Pesagem {
    public static void main(String arg[]){
        Scanner scan = new Scanner(System.in);
        Pessoas pessoa1 = new Pessoas();
        Pessoas pessoa2 = new Pessoas();

        //Infos de pessoa1
        //nome
        System.out.println("Informe nome de pessoa1: ");
        String nome = scan.nextLine();
        pessoa1.setNome(nome);
        //Idade
        System.out.println("Informe idade de pessoa1: ");
        int idade = scan.nextInt();
        pessoa1.setidade(idade);
        //Peso
        System.out.println("Informe peso de pessoa1: ");
        float peso = scan.nextFloat();
        pessoa1.setPeso(peso);
        //Altura
        System.out.println("Informe altura de pessoa1 (x,xx): ");
        float altura = scan.nextFloat();
        pessoa1.setAltura(altura);

        //Infos de pessoa2
        //nome
        scan.nextLine();
        System.out.println("Informe nome de pessoa2: ");
        nome = scan.nextLine();
        pessoa2.setNome(nome);
        //Idade
        System.out.println("Informe idade de pessoa2: ");
        idade = scan.nextInt();
        pessoa2.setidade(idade);
        //Peso
        System.out.println("Informe peso de pessoa2: ");
        peso = scan.nextFloat();
        pessoa2.setPeso(peso);
        //Altura
        System.out.println("Informe altura de pessoa2 (x,xx): ");
        altura = scan.nextFloat();
        pessoa2.setAltura(altura);

        //Mostrando as informações
        System.out.println("******************PESSOA1******************");
        pessoa1.mostrarMenu();
        System.out.println("******************PESSOA2******************");
        pessoa2.mostrarMenu();

    }
}
