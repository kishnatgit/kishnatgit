
/**
 * jv_38_ReverseArray
 */
import java.util.Scanner;

class ReversingArray {
    Scanner sc = new Scanner(System.in);

    public int[] ReverseArray(int arr[]) {
        for (int i = 0; i <= (arr.length-1)/2; i++) {
            int temp = arr[i];
            arr[i] = arr[(arr.length - 1)-i];
            arr[(arr.length - 1)-i] = temp;
        }
        return arr;
    }

    public void getArray(int[] arr) {
        System.out.println("Enter Values into Array:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
    }
}

/**
 * jv_38_ReverseArray
 */
public class jv_38_ReverseArray {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the Size of Array :");
        n = sc.nextInt();
        int[] arr = new int[n];
        ReversingArray obj = new ReversingArray();
        obj.getArray(arr);
        arr = obj.ReverseArray(arr);
        System.out.println("\n\n");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        sc.close();
    }
}