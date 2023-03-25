import java.util.Arrays;

/**
 * java2
 */
// Bubble Sort
public class java2 {

    public static int BubbleSort(int array[]) {

        for (int i = 0; i < array.length-1; i++) {
            for (int j = 0; j < array.length - i-1; j++) {
                // Swap Opeartion
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        return 0;
    }

    public static void main(String[] args) {
        int array[] = { -5, -6, -9, 0, 5, 78, 45, 32 };
        // for (int i = 0; i < array.length; i++) {
        // System.err.print(array[i] + " ");
        // }
        // System.out.println();
        BubbleSort(array);
        // for (int i = 0; i < array.length; i++) {
        // System.err.print(array[i] + " ");
        // }
        System.err.println(Arrays.toString(array));
    }
}