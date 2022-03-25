import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Scanner;

/**
 * jv_47_practiceSet
 */
public class jv_47_practiceSet {

    public static void main(String[] args) {
        ArrayList<String> arr = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Names: ");
        for (int i = 0; i < 5; i++) {
            String str = sc.nextLine();
            arr.add(i, str);
        }
        System.out.println();
        for (String i : arr) {
            // System.out.println();
            System.out.print(i);
            System.out.print(",");
        }
        System.out.println();
        sc.close();

        // Printing Time:
        System.out.println("\n");
        LocalDateTime ldt = LocalDateTime.now();
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("H:m:s");
        String time = ldt.format(dtf);
        System.out.println(time);
    }
}
