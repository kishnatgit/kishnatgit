import java.io.IOException;
import java.util.Scanner;

public class prepbytes_pairs {
    public static void main(String args[]) throws IOException {

        Scanner sc = new Scanner(System.in);
        int n, finalcount = 0, count = 0;
        n = sc.nextInt();
        int arrays[] = new int[n];
        for (int i : arrays) {
            i = sc.nextInt();
            if (i > 1) {
                count = i / 2;
                finalcount = finalcount + count;
            }
        }
        System.out.print(finalcount);
        sc.close();
    }
}