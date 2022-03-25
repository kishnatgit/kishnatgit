import java.util.*;

/**
 * jv_50_Java_Substring_Comparisons
 */
public class jv_50_Java_Substring_Comparisons {

    public static void getString(String s, int k) {
        java.util.ArrayList<String> str = new java.util.ArrayList<>();
        for (int x = 0; x < s.length() - k + 1; x++) {
            str.add(s.substring(x, x + k));
        }
        java.util.Collections.sort(str);
        String smaller = str.get(0);
        String bigger = str.get(str.size() - 1);
        System.out.print(smaller + "\n" + bigger);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int k = sc.nextInt();
        sc.close();
        getString(s, k);
    }
}