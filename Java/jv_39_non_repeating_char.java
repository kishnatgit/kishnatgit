class non_repeating_char {
	public char non_repeated_char(String str) {
		int i;
		char first_non_repeating_char = 'x';
		for (i = 0; i < str.length(); i++) {
			boolean bl = true;
			for (int x = 0; x < str.length(); x++) {
				if (i != x && str.charAt(i) == str.charAt(x)) {
					bl = false;
					break;
				}
			}
			if (bl) {
				if (str.charAt(i) != ' ') {
					first_non_repeating_char = str.charAt(i);
					break;
				}
			}
			bl = true;
		}
		return first_non_repeating_char;
	}
}

/**
 * jv_39_non_repeating_char
 */
public class jv_39_non_repeating_char {

	public static void main(String[] args) {
		System.out.println("Enter into the String: ");
		java.util.Scanner sc = new java.util.Scanner(System.in);
		String str = sc.nextLine();
		non_repeating_char obj = new non_repeating_char();
		char yoo = obj.non_repeated_char(str);
		System.out.println(yoo == 'x' ? "There is no non repeating character in the given string"
				: "The First Non Repeating Char is: " + yoo);
		sc.close();
	}
}