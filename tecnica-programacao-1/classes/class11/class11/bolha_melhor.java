import java.util.Scanner;

public class bolha_melhor{
    public static void main(String[] arg) {
        long inicio = System.currentTimeMillis();
        // int tam = 5;
        // int tam = 1000;
        // int tam = 10000;
        // int tam = 100000;
        int tam = 1000000;
        // int tam = 10000000;

        int i, temp; boolean trocou;
        int[] v = new int[tam];
        // for(int c = 0; c < tam; c++) v[c] = c; // Cria vetor com crescente.
        // for(int d = tam; d >= tam; d--) v[d] = d; // Cria vetor com decrescente.
        for(i = 0;i < tam;i++){
            // System.out.println("Digite o " + (i+1) + "o. numero do vetor: ");
            // v[i] = teclado.nextInt();
            v[i] = (int)(Math.random() * 100);
        }
        System.out.println();
        System.out.println("Vetor original: ");
        for(i = 0;i < tam;i++) System.out.println(v[i] + "\t");
        tam = v.length;
        do{
            trocou = false;
            for(i = 0; i < tam-1; i++)
            {
                if(v[i] > v[i+1]){
                    temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                    trocou = true;
                }
                System.out.println("Ordenando:" + v[i] + "\t");
            }
        } while(trocou);
        System.out.println();
        System.out.println("Vetor ordenado: ");
        for(i = 0;i < tam;i++) System.out.println(v[i] + "\t");
        System.out.println(v.length);
        // Captura o tempo final
        long fim = System.currentTimeMillis();

        // Calcula o tempo de execução em milissegundos
        long tempoExecucao = fim - inicio;
        System.out.println("Tempo de execução: " + tempoExecucao + " ms");
    }
}