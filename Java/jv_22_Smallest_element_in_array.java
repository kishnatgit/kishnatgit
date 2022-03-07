
/**
 * maximun_element_in_array_22
 */
import java.util.Scanner;

public class jv_22_Smallest_element_in_array {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int min = Integer.MIN_VALUE;
        System.out.println("Enter the size of Array Required.");
        int n = scan.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter Elements into Array:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scan.nextInt();
        }
        for (int i : arr) {
            if (i > min)
                min = i;
        }
        System.out.println("The minimun in Array is:- "+min);
        scan.close();
    }
}