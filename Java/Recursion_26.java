
/**
 * Recursion_26
 */
import java.util.Scanner;

public class Recursion_26 {
    static int factorial(int num) {
        if (num == 0 || num == 1)
            return 1;
        else
            return num * factorial(num - 1);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the number to find the factorial of:");
        int num = scan.nextInt();
        System.out.println(factorial(num));
    }
}