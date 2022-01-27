import java.util.Scanner;

/**
 * hackerrank_java_end_of_file_18
 */
public class jv_18_hackerrank_java_end_of_file {

    public static void main(String[] args) {
        System.out.println("Enter Lines:");
        Scanner object = new Scanner(System.in);
        for (int i = 1; object.hasNext() == true; i++) {
            System.out.println(i + " " + object.nextLine());
        }
        object.close();
    }
}