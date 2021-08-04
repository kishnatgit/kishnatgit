import java.util.Random;
import java.util.Scanner;

/**
 * guess_the_number_game_34
 */
class game {

    // Random ran = new Random();
    int TakeInput;
    int random = new Random().nextInt(100);
    Scanner scan = new Scanner(System.in);
    private int count = 0;

    void TakeInput() {
        System.out.println("Enter Your Guess:");
        TakeInput = scan.nextInt();
        game();
    }

    void game() {
        if (TakeInput == random) {
            System.out.println("You have choosen the right number.");
        } else if (TakeInput > random) {
            System.out.println("Choose a lower number.");
            // n = scan.nextInt();
            // count++;
            TakeInput();
        } else if (TakeInput < random) {
            System.out.println("Choose a greater number.");
            // n = scan.nextInt();
            // count++;
            TakeInput();
        }
        count++;
        // return count;
    }

    public int count() {
        return count;
    }
}

public class guess_the_number_game_34 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // System.out.println("Guess a number between 0 - 100:");
        // int num = scan.nextInt();
        game gm = new game();
        gm.TakeInput();
        // gm.count=10; //Cannot access a private variable of game class.
        // gm.game();
        System.out.println("It took " + gm.count() + " times to choose the correct number.");
    }
}