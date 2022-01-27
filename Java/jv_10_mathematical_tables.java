import java.util.Scanner;

public class jv_10_mathematical_tables {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter The Table no.");
        int n = scan.nextInt();
        for (int i = 1; i <= 10; i++) {
            int product = n * i;
            // System.out.printf("%d x %d = %d\n",n,i,product);
            System.out.println(n + " x " + i + " = " + product);
            scan.close();
        }
    }
}