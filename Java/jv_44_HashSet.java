import java.util.HashSet;

/**
 * jv_44_HashSet
 */
public class jv_44_HashSet {

    public static void main(String[] args) {
        HashSet<Integer> hs = new HashSet<>();
        hs.add(1);
        hs.add(2);
        hs.add(3);
        hs.add(46);
        hs.add(5);
        hs.add(7);
        hs.add(75);
        hs.add(5);
        // HashSet Arranges the elements in indices for elements/arraySize!
        System.out.println(hs);
    }
}