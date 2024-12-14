import java.util.Scanner;;

public class Executavel_2{
    public static void main(String a[]){
        Scanner scan = new Scanner(System.in);

        Automovel_Basico ab = new Automovel_Basico("fgh678", 2009, "Preto", "Toyota", false);
        Automovel_Luxo al = new Automovel_Luxo("yui565", 2024, "Rosa", "Bugatti", true);

        System.out.println("Automovel Basico: ");
        System.out.println(ab.toString());

        System.out.println("Automovel Luxo: ");
        System.out.println(al.toString());

    }
}