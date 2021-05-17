
/**
 * maximun_element_in_array_22
 */
import java.util.Scanner;

public class Smallest_element_in_array_22 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int min = Integer.MAX_VALUE;
        System.out.println("Enter the size of Array Required.");
        int n = scan.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter Elements into Array:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scan.nextInt();
        }
        for (int i : arr) {
            if (i < min)
                min = i;
        }
        System.out.println("The minimun in Array is:- "+min);
    }
}