/**
 * java8
 */
import java.util.*;
public class java8 {

    public static void main(String[] args) {
        int decimal_number = 1;
        double power = 0;
        int array[] = { 0, 1, 0, 1, 0 };
        for (int i = 0; i < array.length; i++) {
            decimal_number = array[i] * (Math.pow(2, power));
            power++;
        }
    }
}