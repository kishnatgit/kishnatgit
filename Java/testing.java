import java.util.Scanner;

public class testing {
    public static void main(String[] args) {
        System.out.println("Enter The number:");
        int n = new Scanner(System.in).nextInt();
        int sum = 0;
        while (n != 0) {
            int r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
        System.out.println("The Sum is:" + sum);
    }
}