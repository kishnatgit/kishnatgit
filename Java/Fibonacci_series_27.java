
/**
 * Fibonacci_series_27
 */
import java.util.Scanner;

public class Fibonacci_series_27 {

    static int n1 = 0, n2 = 1, n3 = 0;

    static int fibonacci(int m) {
        if (m > 0) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            System.out.print(" " + n3);
            fibonacci(m - 1);
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the number:");
        int n = obj.nextInt();
        System.out.print(n1 + " " + n2);
        fibonacci(n - 2);
    }
}