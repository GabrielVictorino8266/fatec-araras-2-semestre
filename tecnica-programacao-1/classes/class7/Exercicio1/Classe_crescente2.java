public class Classe_crescente2{
    String meunome;
    public int numero1 = 0;
    public int numero2 = 0;
    public int numero3 = 0;

    public Classe_crescente2(String nome){
        meunome = nome;
    }
    
    public void ordenar(int numero1, int numero2, int numero3){
        System.out.println(this.meunome + " sua ordem e: ");
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