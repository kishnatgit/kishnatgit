import javax.lang.model.element.Element;

/**
 * array_for_each_loop_17
 */
public class jv_17_array_for_each_loop {

    public static void main(String[] args) {
        int[] array = { 150, 200, 450, 500, 650, 4588, 458, 7514, 23147, 1245 };
        for (int element : array) {
            System.out.println(element);
        }
    }
}