//How do you calculate the number of vowels and consonants in a String?

/**
 * java6
 */
public class java6 {

    public static void main(String[] args) {
        String str = "This is ME in this room sitting inside a closet waiting for someone to come so that I'll surprise them!";
        int vowels = 0, consonants = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o'
                    || str.charAt(i) == 'u')
                vowels++;
            else
                consonants++;
        }
        System.out.println(vowels + "\n" + consonants);
    }
}