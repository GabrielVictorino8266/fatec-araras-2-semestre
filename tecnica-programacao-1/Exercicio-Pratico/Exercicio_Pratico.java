import java.util.Scanner;
import java.util.InputMismatchException;

public class Exercicio_Pratico{
    public static void main(String argumentos[]){
        int numero_digitado;
        int tamanho_string;
        
        
        Scanner scanner = new Scanner(System.in);
        
       
        try{
            System.out.println("Digite um numero entre 1 e 999.999.999 :");
            numero_digitado = scanner.nextInt();
            System.out.println("Unidades: " + (numero_digitado % 10));
            System.out.println("Dezenas: " + ((numero_digitado / 10) % 10));
            System.out.println("Centenas: " + ((numero_digitado / 100) % 10));
            System.out.println("Unidade de milhar: " + ((numero_digitado / 1000) % 10));
            System.out.println("Dezena de milhar: " + ((numero_digitado / 10000) % 10));
            System.out.println("Centena de milhar: " + ((numero_digitado / 100000) % 10));
            System.out.println("Unidade de milhao: " + ((numero_digitado / 1000000) % 10));
            System.out.println("Dezena de milhao: " + ((numero_digitado / 10000000) % 10));
            System.out.println("Centena de milhao: " + ((numero_digitado / 100000000) % 10));
        }
        catch (InputMismatchException e){
            System.out.println("Se atente ao que foi digitado. Tente novamente.");
        }


        };
            
}
