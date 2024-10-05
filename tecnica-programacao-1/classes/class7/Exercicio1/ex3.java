import java.util.Scanner;

public class ex3{

    public static void main(String arg[]){
        Scanner scan = new Scanner(System.in);
        int numero1 = 0;
        int numero2 = 0;
        int numero3 = 0;
        
        System.out.println("Digite o numero 01: ");
        numero1 = scan.nextInt();
        System.out.println("Digite o numero 02: ");
        numero2 = scan.nextInt();
        System.out.println("Digite o numero 03: ");
        numero3 = scan.nextInt();
        
        System.out.println("Resultados: ");
        Classe_crescente ordenaNumeros = new Classe_crescente();
        ordenaNumeros.ordenar(numero1, numero2, numero3);
    }
}