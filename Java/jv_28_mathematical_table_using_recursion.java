import java.util.Scanner;

public class jv_28_mathematical_table_using_recursion {
    static Scanner object = new Scanner(System.in);
    static int i = 1;
    
    static void table(int n, int i) {
        if (i <= 10) {
            System.out.format("%d X %d = %d\n", n, i, n * i);
            table(n, i + 1);
        }
    }
    
    public static void main(String[] args) {
        boolean run = true;
        while (run) {
            System.out.println("Enter the table number:");
            int table_number = object.nextInt();
            table(table_number, i);
            System.out.println("Want to Run again?(y/n)");
            String S = object.next();
            if(!S.equals("y"))
                run = false;
            else
                run = true;
        }
    }
}
