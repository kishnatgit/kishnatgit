
/**
 * string_15
 */
import java.util.Scanner;

public class jv_15_string_functions {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter The String.");
        /// length().
        String New_String = scan.nextLine();
        System.out.println("String Length = " + New_String.length());
        /// toLowerCase().
        System.out.println("In LowerCase: " + New_String.toLowerCase());
        /// toUppercase().
        System.out.println("In Uppercase: " + New_String.toUpperCase());
        scan.close();
    }
}