import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.BufferedWriter;


public class PhoneNumbers {
    public static void main(String args[]){
        boolean fileExists = false;
        String filepath = "C:\\repositorios\\fatec-araras-2-semestre\\tecnica-programacao-1\\classes\\class12\\phonenumbers.txt";

        File file = new File(filepath);
        if(file.exists()){// Already exists this file
            System.out.println("File already exists.");
            fileExists = true;
        }else{// Creating Files
            try{
                System.out.println("File was created succesful.");
                fileExists = false;
                file.createNewFile();
            }catch(IOException e){
                System.out.println("Error at creation.");
                System.out.println(e.getMessage());
            }
        }

        try(BufferedWriter writer =  new BufferedWriter(new FileWriter(file, true))){
            writer.newLine();
            writer.write("Gabriel Victorino");
            writer.append(" ");
            writer.write("19 9999-dasdas");
            System.out.println("Writed with succesful");
        }catch(IOException e){
            System.out.println("Error occurred.");
            System.out.println(e.getMessage());
        }
    }
}
