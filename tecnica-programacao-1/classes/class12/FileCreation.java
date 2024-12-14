import java.io.File;
import java.io.IOException;

public class FileCreation {
    public static void Main(){
        System.out.println("Creating File");
        File file = new File("Example.txt");
        try{
            if(file.createNewFile()){
                System.out.println("Created file." + file.getName());
            }
        } catch(IOException e){
            System.out.println("Error at creation.");
            e.printStackTrace();
        }
    }
}
