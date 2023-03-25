import java.math.BigInteger;

/**
 * jv_51_Factorial_using_BigInteger
 */
public class jv_51_Factorial_using_BigInteger {

    static BigInteger Factorial(int n) {

        BigInteger bg = new BigInteger("1");
        for (int i = n; i >= 1; i--) {
            bg = bg.multiply(BigInteger.valueOf(i));

        }
        return bg;
    }

    public static void main(String[] args) {
        int N = 50;
        System.out.println(Factorial(N));
    }
}