import java.util.Scanner;

public class jv_19_cwh_practice_qstns {

    public static void main(String[] args) {
        int[] array = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
        Scanner scan = new Scanner(System.in);
        while (true) {
            System.out.println("Enter your No.");
            int num = scan.nextInt();
            boolean present = false;
            // for (int i = 0; i < array.length; i++) {
            // if (array[i] == num)
            // System.out.println(num + " is present inside the array.");
            // }
            for (int objects : array) {
                if (objects == num)
                    present = true;
            }
            if (present)
                System.out.println(num + " is present inside the array.");
            else
                System.out.println(num + " is not present inside the array.");
            System.out.println("Want to Check again:(y/n)");
            String ch = scan.next();
            if (!ch.equals("y"))
                break;
        }
        scan.close();
    }
}