import java.util.Scanner;

/**
 * average_using_method_32
 */
public class average_using_method_32 {
    static Scanner sc = new Scanner(System.in);
    static int sum = 0;

    static int average_method(int[] array, int n, int i) {
        if (i == n)
            return 0;
        sum = sum + array[i];
        average_method(array, n, i + 1);
        return sum / n;
        // for (int i : array) {
        // sum = sum + i;
        // }
    }

    public static void main(String[] args) {
        int i = 0;
        System.out.println("Enter how many numbers to be calculated for average:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the numbers:");
        for (int j = 0; j < arr.length; j++) {
            arr[j] = sc.nextInt();
        }
        // int result = average_method(arr, n);
        System.out.println("The Average is: " + average_method(arr, n, i));
    }
}