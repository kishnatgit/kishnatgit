public class varargs_25 {
    // Atleast one arguement is required for int x.
    static int sum(int x, int... array) {
        int result = x;
        for (int a : array) {
            result += a;
        }
        return result;
    }

    public static void main(String[] args) {
        // System.out.println("The sum is:"+sum());
        System.out.println("The sum is:" + sum(6, 4));
        System.out.println("The sum is:" + sum(5, 6, 4, 5));
        System.out.println("The sum is:" + sum(5, 6, 4, 5, 10));
        System.out.println("The sum is:" + sum(5, 6, 4, 5, 10, 20));
    }
}