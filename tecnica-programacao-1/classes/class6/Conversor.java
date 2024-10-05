package class6;

public class Conversor {

    public Conversor(int numeroDecimal) {
        if (numeroDecimal >= 0) {
            String binario = Integer.toBinaryString(numeroDecimal);
            System.out.println("Decimal: " + numeroDecimal);
            System.out.println("Binário: " + binario);
        } else {
            System.out.println("Erro: Decimal deve ser maior ou igual a zero.");
        }
    }

    public Conversor(String hexadecimal) {
        if (isHexadecimalValido(hexadecimal)) {
            int valorDecimal = Integer.parseInt(hexadecimal, 16);
            System.out.println("Hexadecimal: " + hexadecimal);
            System.out.println("Decimal: " + valorDecimal);
        } else {
            System.out.println("Erro: String não é um valor hexadecimal válido.");
        }
    }

    private boolean isHexadecimalValido(String hexadecimal) {
        return hexadecimal.matches("[0-9A-Fa-f]+");
    }
}