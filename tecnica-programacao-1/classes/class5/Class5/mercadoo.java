import java.util.Scanner;

public class mercadoo {
    public static void main(String arg[]){
        Scanner t = new Scanner(System.in);
        produtos arroz = new produtos();
        produtos feijao = new produtos();
        System.out.println("Digite o preço para o arroz: ");
        arroz.codigo = 1;
        double p = t.nextDouble();
        arroz.seta_preco(p);
        System.out.println("Digite o preço para o feijao: ");
        feijao.codigo = 1;
        p = t.nextDouble();
        feijao.seta_preco(p);
        System.out.println("O preco do arroz e = " + arroz.retona_preco() + " codigo: " + arroz.codigo);
        System.out.println("O preco do feijao e = " + feijao.retona_preco() + " codigo: " + arroz.codigo);
    }
}
