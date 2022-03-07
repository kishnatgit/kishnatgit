import java.util.*;

/**
 * jv_42_LinkedList
 */
public class jv_42_LinkedList {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter The Number of Elements to be Stored:");
        int i;
        int numberofelements = sc.nextInt();
        LinkedList<Integer> li = new LinkedList<>();
        for (i = 0; i < numberofelements; i++) {
            li.add(i, new Scanner(System.in).nextInt());
        }
        // Using toArray() to arrange the elements in sequential order!
        // Creating an object of Array!
        try {
            li.add(4, 800);
            li.add(i + 1, 900);
        } catch (Exception e) {
            System.out.println("Error Occured "+e);
        }
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