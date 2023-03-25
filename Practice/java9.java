import java.lang.reflect.Array;
import java.util.*;

/**
 * java9
 */
public class java9 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer> list1 = new ArrayList<>();
        for (int n = 0; n < N; n++) {
            list1.add(sc.nextInt());
        }
        // Collections.sort(list1);
        int M = sc.nextInt();
        ArrayList<Integer> list2 = new ArrayList<>();
        for (int n = 0; n < M; n++) {
            list2.add(sc.nextInt());
        }
        // Collections.sort(list2);
        list1.addAll(list2);
        Collections.sort(list1);
        for (int iterable_element : list1) {
            System.out.print(iterable_element+ " ");
        }

        // Object[] ArrayOfList1 = list1.toArray();
        // String StringOfList1 = Arrays.toString(ArrayOfList1);
        // System.out.print(StringOfList1);
    }
}