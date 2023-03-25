//Reverse a String
/**
 * java3
 */
public class java3 {

    public static void main(String[] args) {
        String str = "goog";

        String reverse = "";

        for (int i = 0; i < str.length(); i++) {

            reverse = str.charAt(i) + reverse;

        }

        System.out.println(reverse);

        if (str.equals(reverse))
            System.out.println("Palindrome String");
        else
            System.out.println("Non-Palindrome String");
    }
}