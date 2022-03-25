import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.Scanner;

/**
 * jv_48_Files
 */
public class jv_48_Files {

    public static void main(String[] args) {
        // Creates a new file!
        File newfile = new File("jv_48_Files.txt");
        try {
            newfile.createNewFile();
        } catch (Exception e) {
            System.out.println("File Not Created!");
        }

        // Creates a new file if file doesn't exist and writes to it!
        try {
            FileWriter fw = new FileWriter("jv_48_Files.txt");
            fw.write("This is a testing code!\nFile Created Successfully!!");
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
        }

        // Reads a file!
        File newfiFile = new File("jv_48_Files.txt");
        try {
            Scanner sc = new Scanner(newfiFile);
            while (sc.hasNextLine()) {
                String line = sc.nextLine();
                System.out.println(line);
            }
            sc.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}