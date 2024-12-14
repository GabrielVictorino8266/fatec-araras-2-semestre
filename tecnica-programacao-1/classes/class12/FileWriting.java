import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.BufferedWriter;


public class FileWriting {
    public static void main(String args[]){
        System.out.println("Writing file.")
        try(BufferedWriter writer =  new BufferedWriter(new FileWriter("Example.txt", true))){
            writer.write("Gabriel Victorino");
            writer.append(" ");
            writer.write("19 9999-9999");
            writer.newLine();
        }catch(IOException e){
            System.out.println("Error occurred.");
            System.out.println(e.getMessage());
        }
    }
}
