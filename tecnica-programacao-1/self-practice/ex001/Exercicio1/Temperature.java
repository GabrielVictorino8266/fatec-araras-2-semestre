import java.util.Scanner;

public class Temperature {
    private Scanner scanner;

    private float celsius;
    private float kelvin;
    private float fahrenheight;

    public Temperature(){
        this.scanner = new Scanner(System.in);
    }

    void showMenu(){
        System.out.println
        ("""
        |--------------------MENU---------------------|
        | 0 - Sair do sistema.                        |
        | 1 - Converter em Kelvin                     |
        | 2 - Fahrenheight                            |
        |---------------------------------------------|
        \n Escholha um numero acima: 
        """);
    }

    float getKelvin(){
        return kelvin;
    }

    float getFahrenheight(){
        return fahrenheight;
    }

    float getCelsius(){
        return celsius;
    }

    float setCelsius(float new_celsius){
        System.out.println("Type the temperature in celsiues scale...\n");
        celsius = scanner.nextFloat();

        return celsius;
    }

}
