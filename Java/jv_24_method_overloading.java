
/**
 * method_overloading_24
 */
import java.util.Scanner;

public class jv_24_method_overloading {
    static void change(int[] arr2) {
        arr2[2] = 505;
        arr2[3] = 1405;
        arr2[4] = 1452505;
        arr2[5] = 1470035;
    }

    static void same() {
        System.out.println("This is a testing code.");
    }

    // Overloaded Methods
    static void same(int a) {
        System.out.println("This is a testing code for a = " + a);
    }

    // Overloaded Methods
    static void same(int a, int b) {
        System.out.println("This is a testing code for a = " + a + " and b = " + b);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] arr = { 25, 54, 87, 46, 18, 24, 102, 5024, 245, 2525 };
        System.out.println("The Array before change is: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.print("\n");
        change(arr);
        // Changing values of array using method.
        System.out.println("The Array after change is: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        same();
        System.out.println("Enter the value for same(1):");
        int sm1 = scan.nextInt();
        // Method Overloading.
        same(sm1);
        System.out.println("Enter the values for same(1,2):");
        int sm2 = scan.nextInt();
        // Method Overloading.
        same(sm1, sm2);
        System.out.println("Enter two other values for same(1,2):");
        int sm3 = scan.nextInt();
        int sm4 = scan.nextInt();
        // Method Overloading.
        same(sm3, sm4);
        scan.close();
    }
}