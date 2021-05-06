
/**
 * problemjava7
 */
import java.util.Scanner;

public class problemjava7 {

    public static void main(String[] args) {
        Scanner sch = new Scanner(System.in);
        System.out.println("Enter The Student's Name:");
        String name = sch.nextLine();
        System.out.println("Enter The Student's mark in 1st Subject:");
        float mrk1 = sch.nextInt();
        System.out.println("Enter The Student's mark in 2nd Subject:");
        float mrk2 = sch.nextInt();
        System.out.println("Enter The Student's mark in 3rd Subject:");
        float mrk3 = sch.nextInt();
        System.out.println("Enter The Student's mark in 4th Subject:");
        float mrk4 = sch.nextInt();
        System.out.println("Enter The Student's mark in 5th Subject:");
        float mrk5 = sch.nextInt();
        float total_marks_obtained_in_5_subjects = mrk1 + mrk2 + mrk3 + mrk4 + mrk5;
        System.out.println("The Total is:");
        System.out.println(total_marks_obtained_in_5_subjects);
        float percentage = (total_marks_obtained_in_5_subjects*100)/500;
        System.out.println("The Percentage of " + name + " in 5 subjects is:" + percentage);
    }
}