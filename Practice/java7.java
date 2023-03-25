import java.util.ArrayList;

/**
 * java7
 */
public class java7 {

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(25);
        list.add(45);
        list.add(525);
        list.add(2655);

        for (Integer i : list) {
            System.out.println(i);
        }
    }
}