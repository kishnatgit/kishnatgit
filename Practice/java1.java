/**
 * java1
 */
//Fibonacci Series
public class java1 {

    public static void main(String[] args) {
        long i = 0, n = 1, sum = 0;
        System.out.println(i);
        System.out.println(n);
        while (sum <= 10) {
            i = i + n;
            System.out.println(i);
            n = n + i;
            System.out.println(n);
            sum++;
        }
    }
}