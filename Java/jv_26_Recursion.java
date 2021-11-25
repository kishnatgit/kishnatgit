
/**
 * Recursion_26
 */
import java.util.Scanner;

public class Recursion_26 {
    static int factorial(int num) {
        int fact = 0;
        if (num == 0 || num == 1)
            return 1;
        else
            return num * factorial(num - 1);
    }

    static int factorial_iterative(int num) {
        int fact = 1;
        for (int n = num; n > 0; n--) {
            fact *= n;
        }
        return fact;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the number to find the factorial of:");
        int num = scan.nextInt();
        System.out.println("The Factorial of " + num + " using recursion is " + factorial(num) + ".");
        System.out.println("The Factorial of " + num + " using iteration is " + factorial_iterative(num) + ".");
    }
}