/// To find out whether a given no. is greater then the user's entered no. or not.

/**
 * problemjava14
 */
import java.util.Scanner;

public class problemjava14 {

    public static void main(String[] args) {
        int given_number=50;
        System.out.println("Enter A Number:");
        Scanner scan=new Scanner(System.in);
        int input_num=scan.nextInt();
        System.out.println(input_num>given_number);
                            ///Another one
            System.out.println("Another Program");
                System.out.println("Enter the value of v:");
                int v = scan.nextInt();
                System.out.println("Enter the value of u:");
                int u = scan.nextInt();
                System.out.println("Enter the value of a:");
                int a = scan.nextInt();
                System.out.println("Enter the value of s:");
                int s = scan.nextInt();
                float answer = (float)((Math.pow(v, 2) - Math.pow(u, 2))/(2*a*s));
                System.out.println(answer);
    }
}