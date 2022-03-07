import java.util.ArrayDeque;

/**
 * jv_43_ArrayDeque
 */
public class jv_43_ArrayDeque {

    public static void main(String[] args) {
        ArrayDeque<Integer> ad = new ArrayDeque<>();
        ad.add(59);
        ad.add(80);
        ad.add(67);
        ad.add(36);
        
        System.out.println(ad.getFirst());
        System.out.println(ad.getLast());
    }
}