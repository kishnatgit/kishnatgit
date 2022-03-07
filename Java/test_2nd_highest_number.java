/**
 * test_2nd_highest_number
 */
class test_2nd_highest_number {
    public static int SecondLargest(int[] a, int total) {
        int temp;
        for (int i = 0; i < total; i++) {
            for (int j = i + 1; j < total; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        return a[total - 2];
    }

    public static void main(String args[]) {
        int x[] = { 14, 29, 56, 68, 35, 25 };
        int total = x.length;
        System.out.println("Second Largest: " + SecondLargest(x, total));
    }
}