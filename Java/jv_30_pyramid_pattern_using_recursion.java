import java.util.Scanner;

/**
 * pyramid_pattern_using_recursion_30
 */
public class jv_30_pyramid_pattern_using_recursion {
    static Scanner object = new Scanner(System.in);
    static int columns = 1;
    static int stars = 1;
    static int n = 0;
    static int star_rep = 0;
    static int pyramid_tip = 70;

    static void printing_stars(int star) {
        if (star == 0)
            return;
        System.out.print("*");
        printing_stars(star - 1);
    }

    static void pattern(int column, int n, int star_rep) {
        if (column == pyramid_tip - n) {
            printing_stars(stars + star_rep);
            return;
        } else
            System.out.print(" ");
        pattern(column + 1, n, star_rep);
    }

    static void pyramid(int h, int c, int n, int star_rep) {
        if (h == 0)
            return;
        pattern(c, n, star_rep);
        System.out.println();
        pyramid(h - 1, c, n + 1, star_rep + 2);
    }

    public static void main(String[] args) {
        System.out.println("Enter the height of the Pyramid:");
        int height = object.nextInt();
        pyramid_tip = height;
        pyramid(height, columns, n, star_rep);
    }
}