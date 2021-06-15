
/**
 * printing_patterns_using_recursion_29
 */
import java.util.Scanner;

public class printing_patterns_using_recursion_29 {
    static Scanner object = new Scanner(System.in);
    static int columns=1;
    static void pattern(int column){
        if(column==0)
        return;
        System.out.print("* ");
        pattern(column-1);
    }

    static void pattern_method(int r,int c){
        if(r==0)
        return;
        pattern(c);
        System.out.println();
        pattern_method(r-1, c+1);
    }
    public static void main(String[] args) {
        System.out.println("Enter the no. of rows to be printed in the pattern:");
        int rows = object.nextInt();
        pattern_method(rows,columns);
    }
}