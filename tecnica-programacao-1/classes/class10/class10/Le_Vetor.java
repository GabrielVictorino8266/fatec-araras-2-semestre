import java.util.Scanner;

class Le_Vetor
{
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        int[] vetor = new int[5];
        for(int i=0;i<5;i++){
            System.out.println("Digite um numero para o vetor: ");
            vetor[i] = teclado.nextInt();
        }

        System.out.println("Valores digitados no vetor");
        for(int i=0;i<5;i++) System.out.println(vetor[i]);
    }
}