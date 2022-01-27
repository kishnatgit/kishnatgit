import java.util.Scanner;

public class jv_9_output_formatting {

    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        System.out.println("================================");
        for (int i = 0; i < 3; i++) {
            String str = Scan.next();
            int num = Scan.nextInt();
            System.out.printf("%-15s%03d%n", str, num);
                        /// String is left justified by 15 characters.
                            /// Intergers of two digits printed in three digits.
        }
        System.out.println("================================");
        Scan.close();
    }
}