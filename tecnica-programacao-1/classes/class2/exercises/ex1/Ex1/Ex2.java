public class Ex2{
    public static void main(String arg[]){
        int num1=7;
        String message = "Não é par";
        
        System.out.println("Usando o if.");
        if(num1 % 2 == 0){
            message = "É par";
            System.out.println(message);
        }else{
            System.out.println(message);
        }
        
        message = "Não é par";
        
        System.out.println("Usando o Switch");
        switch(num1 % 2){
            case 0:
                message = "É Par";
                System.out.println(message);
                break;
            default:
                System.out.println(message);
        }
    }
}