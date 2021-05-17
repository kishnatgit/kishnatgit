
/**
 * TwoD_Array_Problem_20
 */
import java.util.Scanner;

public class TwoD_Array_Problem_20 {

    public static void main(String[] args) {
        int[][] array1 = new int[3][3];
        int[][] array2 = new int[3][3];
        int[][] result_array = new int[3][3];
        Scanner scan = new Scanner(System.in);
        while (true) {
            System.out.println("Enter The Values into Array1 and Array2.");
            for (int i = 0; i < array1.length; i++) {
                for (int j = 0; j < array1[i].length; j++) {
                    array1[i][j] = scan.nextInt();
                }
            }
            for (int i = 0; i < array2.length; i++) {
                for (int j = 0; j < array2[i].length; j++) {
                    array2[i][j] = scan.nextInt();
                }
            }
            System.out.println("The Sum of Array1 and Array2 is:");
            for (int i = 0; i < result_array.length; i++) {
                for (int j = 0; j < result_array[i].length; j++) {
                    result_array[i][j] = array1[i][j] + array2[i][j];
                    System.out.print(result_array[i][j] + " ");
                }
                System.out.println();
            }
            System.out.println("Want To Run Again?(y\n)");
            String ch = scan.next();
            if (!ch.equals("y"))
                break;
        }
    }
}
