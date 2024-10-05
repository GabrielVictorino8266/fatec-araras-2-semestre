import java.util.Scanner;

public class ex5{

    public static void main(String arg[]){
        Scanner scan = new Scanner(System.in);
        int numero1 = 0;
        int numero2 = 0;
        int numero3 = 0;
        String nome;
        
        System.out.println("Digite o numero 01: ");
        numero1 = scan.nextInt();
        System.out.println("Digite o numero 02: ");
        numero2 = scan.nextInt();
        System.out.println("Digite o numero 03: ");
        numero3 = scan.nextInt();
        System.out.println("Digite seu nome: ");
        nome = scan.next();
        
        System.out.println("Resultados: ");
        Classe_crescente5 ordenaNumeros2 = new Classe_crescente5();
        Classe_crescente5 ordenaNumeros = new Classe_crescente5(nome);
        ordenaNumeros.ordenar(numero1, numero2, numero3);
        ordenaNumeros2.ordenar(numero1, numero2, numero3);
    }
}