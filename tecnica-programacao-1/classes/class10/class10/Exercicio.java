import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class Exercicio{
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        int[] vetor;
        int[] vetor_final;
        int menor;

        vetor = new int[10];
        vetor_final = new int[10];

        for(int i = 0; i<10;i++){
            System.out.println("Digite um numero para posicao: " + (i+1));
            vetor[i] = teclado.nextInt();
        }

        menor = vetor[0];
        for(int i = 0;i < 10;i++){
            if(vetor[i] < menor){
                menor = vetor[i];
                vetor_final[i] = menor;
                System.out.println("Menor" + menor);
            }
        }

        for(int i = 0; i<10;i++){
            System.out.println(vetor_final[i]);
        }

    }


    public void  encontraMenor(int[] lista){
        int menor = Integer.MAX_VALUE;
        if(lista.length > 0){
            for(int pos = 0; pos < lista.length;pos++){
                if(lista[pos] < menor){
                    menor = lista[pos];
                    System.out.println(menor);
                    break;
                }
            }

        }
    }
}