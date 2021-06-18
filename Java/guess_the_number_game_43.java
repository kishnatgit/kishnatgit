import java.util.Random;
import java.util.Scanner;

/**
 * guess_the_number_game_43
 */
class game {

    // Random ran = new Random();
    int random = new Random().nextInt(101);
    Scanner scan = new Scanner(System.in);
    private int count = 0;

    public int game(int n) {
        if (n == random) {
            System.out.println("You have choosen the right number.");
        } else if (n > random) {
            System.out.println("Choose a lower number.");
            n = scan.nextInt();
            // count++;
            game(n);
        } else if (n < random) {
            System.out.println("Choose a greater number.");
            n = scan.nextInt();
            // count++;
            game(n);
        }
        count++;
        return count;
    }

    public int count() {
        return count;
    }
}

public class guess_the_number_game_43 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Guess a number between 0 - 100:");
        int num = scan.nextInt();
        game gm = new game();
        // gm.count=10; //Cannot access a private variable of game class.
        gm.game(num);
        System.out.println("It took " + gm.count() + " times to choose the correct number.");
    }
}