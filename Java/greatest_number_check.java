import java.util.Scanner;                          
public class greatest_number_check {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);         // scanner variable input.
        int[] num = new int[5];
        // num= new int[5];                                     //memory allocation to num.
        System.out.println("Enter The Values to num:");
        for (int i = 0; i < 5; i++) {
            num[i] = input.nextInt();
        }
        int greatest = num[0];
        for (int i = 0; i < 5; i++) {
            if (num[i] > greatest)
                greatest = num[i];
        }
        System.out.println("The Greatest Number in the Array is:-" + greatest);
    }
}