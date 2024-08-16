import java.util.Scanner;
import java.util.InputMismatchException;

public class Ex3
{
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);  
        
        int num1;
        System.out.println("Informe um numero: ");
        
        try{
            num1 = sc.nextInt();
            sc.close();
            
            System.out.println("Voce digitou: " + num1);
            System.out.println("É um numero.");
            if(num1 < 0){
                System.out.println("É negativo.");
            }else{
                System.out.println("É positivo.");
            }
        }
        catch(InputMismatchException  e){
            System.out.println("Tipo invalido.");
        }
        
    }
}