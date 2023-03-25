import java.util.Scanner;

// A simple Java program to generate all rotations
// of a given string

class Test
{
	// Print all the rotated string.
	static void printRotatedString(String str)
	{
		int len = str.length();
	
		StringBuffer sb;
		int count = 0;
		
		for (int i = 0; i < len; i++)
		{
			sb = new StringBuffer();
			
			int j = i; 
			int k = 0; 
	
			
			for (int k2 = j; k2 < str.length(); k2++) {
				sb.insert(k, str.charAt(j));
				k++;
				j++;
			}
	
			
			j = 0;
			while (j < i)
			{
				sb.insert(k, str.charAt(j));
				j++;
				k++;
			}
			count++;
		}
		System.out.println(count);
	}
	
	// Driver method
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		printRotatedString(str);
	}
}
