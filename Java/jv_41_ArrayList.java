import java.util.*;

/**
 * jv_41_ArrayList
 */
public class jv_41_ArrayList {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter The Number of Elements to be Stored:");
        int numberofelements = sc.nextInt();
        ArrayList<Integer> li = new ArrayList<>();
        for (int i = 0; i < numberofelements; i++) {
            li.add(i, new Scanner(System.in).nextInt());
        }
        // Using toArray() to arrange the elements in sequential order!
        // Creating an object of Array!
        li.add(4, 800);
        Object[] arr = li.toArray();
        System.out.println();
        // toString() converts Array to a string!
        System.out.println(Arrays.toString(arr));
        System.out.println();
        System.out.println(li.contains(800));
        System.out.println(li.indexOf(800));
        sc.close();
    }
}