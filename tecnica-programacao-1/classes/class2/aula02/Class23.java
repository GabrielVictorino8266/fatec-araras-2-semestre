public class Class23
{
    public static void Main(String arg[]){
        int num1, num2;

        try{
            num1 = 10;
            num2 = 0;
            System.out.println("Soma = " + (num1 + num2));
            System.out.println("Subtracao = " + (num1 * num2));
            System.out.println("Divisao = " + (num1/num2));
            System.out.println("Multiplicacao = " + (num1 * num2));
        }
        catch(ArithmeticException e){
            System.out.println("Erro de divisao por zero");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Numero de argumentos invalidos");
        }
        catch(NumberFormatException e)
        {
            System.out.println("Digite apenas numeros inteiros!");
        }
    }
}