import java.util.Scanner;

/**
 * sum_of_first_n_numbers_using_recursion_31
 */
public class sum_of_first_n_numbers_using_recursion_31 {
    static Scanner scan = new Scanner(System.in);
    static int sum = 0;

    static int sum_of_natural_number(int num) {
        if (num == 0)
            return 0;
        else
            return sum = num + sum_of_natural_number(num - 1);

    }

    public static void main(String[] args) {
        System.out.println("Enter the number:");
        int n = scan.nextInt();
        sum_of_natural_number(n);
        System.out.println("The sum is: " + sum);
    }
}