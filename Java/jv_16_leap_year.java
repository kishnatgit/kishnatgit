
/**
 * leap_year_16
 */
import java.util.Scanner;

public class jv_16_leap_year {

    public static void main(String[] args) {
        Scanner object = new Scanner(System.in);
        while (true) {
            System.out.println("Enter The Year:");
            int year = object.nextInt();
            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0)
                        System.out.println(year + " is a Leap Year.");
                    else
                        System.out.println(year + " is not a Leap Year.");
                } else
                    System.out.println(year + " is a Leap Year.");
            } else
                System.out.println(year + " is not a Leap Year.");

            System.out.println("Do Want to Test again:(y/n)");
            String run_again = object.next();
            if (!run_again.equals("y"))
            break;
        }
        object.close();
    }
}