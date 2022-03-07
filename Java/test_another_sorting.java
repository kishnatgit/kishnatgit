import java.util.Arrays;
/**
 * test_another_sorting
 */
class test_another_sorting {
    public static int getSecondLargest(int[] a, int total) {
        Arrays.sort(a);
        return a[total - 2];
    }

    public static void main(String args[]) {
        int x[] = { 46, 51, 32, 95, 45, 65, 89 };
        int total=x.length;
        System.out.println("Second Largest: " + getSecondLargest(x, total));
    }
}