// Find the number of occurrences of a character in a String
/**
 * java4
 */
public class java4 {

    public static void main(String[] args) {
        String str = "This is ME in this room sitting inside a closet waiting for someone to come so that I'll surprise them!";
        char search_char = 'o';
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == search_char)
                count++;
        }
        System.out.println(count);
    }
}