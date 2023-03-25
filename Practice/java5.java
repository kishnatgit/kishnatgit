import java.util.Arrays;

//How to find out if the given two strings are anagrams or not?
/**
 * java5
 */
public class java5 {

    public static void main(String[] args) {
        boolean b = false;
        String s1 = "goodi";
        String s2 = "doogi";
        if (s1.length() != s1.length())
            b = false;
        else {
            char[] str1 = s1.toCharArray();
            char[] str2 = s2.toCharArray();
            Arrays.sort(str1);
            Arrays.sort(str2);
            b = Arrays.equals(str1, str2);
        }
        if (b == true)
            System.out.println("Anagrams");
        else
            System.out.println("Not Anagrams");
    }
}