import java.util.Scanner;

public class ex2{
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
        ordenar(numero1, numero2, numero3);
    }

    public static void ordenar(int numero1, int numero2, int numero3){
        if(numero1 < numero2){
            if(numero2 < numero3 && numero1 < numero3){
                System.out.print(String.valueOf(numero1) +" "+ String.valueOf(numero2) +" "+ String.valueOf(numero3));    
            }else{
                System.out.print(String.valueOf(numero1) +" "+ String.valueOf(numero3) +" "+  String.valueOf(numero2)); 
            };
        }else if(numero2 < numero3){
            if(numero2 < numero1 && numero1 < numero3){
                System.out.print(String.valueOf(numero2)+" "+  String.valueOf(numero1) +" "+ String.valueOf(numero3)); 
            }else{
                System.out.print(String.valueOf(numero2) +" "+ String.valueOf(numero3) +" "+  String.valueOf(numero1)); 
            };
        }else if(numero3 < numero1){
            if(numero3 < numero2 && numero2 < numero1){
                System.out.print(String.valueOf(numero3) +" "+  String.valueOf(numero2) +" "+  String.valueOf(numero1)); 
            }else{
                System.out.print(String.valueOf(numero3) +" "+ String.valueOf(numero1) +" "+  String.valueOf(numero2)); 
            };
        }
    }
}