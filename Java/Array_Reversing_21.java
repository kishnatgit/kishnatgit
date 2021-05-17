
/**
 * Array_Reversing_21
 */
import java.lang.reflect.Array;
import java.util.Scanner;

public class Array_Reversing_21 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Size of Array you Require.");
        int n = scan.nextInt();
        int[] Array = new int[n];
        System.out.println("Enter values into Array.");
        for (int i = 0; i < Array.length; i++) {
            Array[i] = scan.nextInt();
        }
        for (int i = 0; i <= (Array.length - 1) / 2; i++) {
            int temp = Array[i];
            Array[i] = Array[(Array.length - 1) - i];
            Array[(Array.length - 1) - i] = temp;
        }
        System.out.println("The Reversed Array is:");
        System.out.print("{ ");
        for (int i : Array) {
            System.out.print(i + ", ");
        }
        System.out.print("}");
    }
}