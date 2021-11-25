
/**
 * Rock_Paper_Scissor_game_17
 */
import java.util.Random;
import java.util.Scanner;

public class jv_17_Rock_Paper_Scissor_game {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String[] rock_paper_scissor = { "r", "p", "s" };
        while (true) {
        String Computer_choice = rock_paper_scissor[new Random().nextInt(rock_paper_scissor.length)];
            System.out.println("Enter'r' for Rock, 'p' for Paper, 's' for Scissor.");
            while (true) {
                String users_choice = scan.nextLine();
                System.out.println("Your Choice: "+users_choice);
                System.out.println("Computer's Choice: "+Computer_choice);
                if (users_choice.equals(Computer_choice)) {
                    System.out.println("It's a Tie!!!");
                } else if (users_choice.equals("r")) {
                    if (Computer_choice.equals("p"))
                        System.out.println("Computer Won!!");
                    else if (Computer_choice.equals("s"))
                        System.out.println("You Won!!");
                } else if (users_choice.equals("p")) {
                    if (Computer_choice.equals("s"))
                        System.out.println("Computer Won!!");
                    else if (Computer_choice.equals("r"))
                        System.out.println("You Won!!");
                } else if (users_choice.equals("s")) {
                    if (Computer_choice.equals("r"))
                        System.out.println("Computer Won!!");
                    else if (Computer_choice.equals("p"))
                        System.out.println("You Won!!");
                }
                if (users_choice.equals("r") || users_choice.equals("p") || users_choice.equals("s"))
                    break;
                System.out.println("Invalid Choice, Try Again!!");
            }
            System.out.println("Want To Play Again:(y/n)");
            String play_again = scan.nextLine();
            if (!play_again.equals("y"))
                break;
        }
    }
}