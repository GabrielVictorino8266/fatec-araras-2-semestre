public class Class22
{
    public static void main(String arg[]){
        int x = (int)(Math.random()*9);
        switch(x){
            case 0: System.out.println("zero"); break;
            case 1: System.out.println("um") ; break;
            case 2: System.out.println("dois") ; break;
            case 3: System.out.println("tres") ; break;
            case 4: System.out.println("quatro") ; break;
            case 5: System.out.println("cinco") ; break;
            default: System.out.println("Numero desconhecido") ; break;
        }
    }

}