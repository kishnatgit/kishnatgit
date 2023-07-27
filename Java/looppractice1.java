/**
 * looppractice1
 */
public class looppractice1 {

    static void loopIt() {
        for (int i = 1; i < 6; i++) {
            System.out.println(i);
        }
    }

    static void whileIt() {
        int i = 6;
        do {
            System.out.println(i);
            i++;
        } while (i < 11);
    }

    static void butWhileIt() {
        int i = 11;
        do {
            System.out.println(i);
            i++;
        } while (i < 10);
    }

    public static void main(String[] args) {
        loopIt();
        whileIt();
        butWhileIt();
    }
}