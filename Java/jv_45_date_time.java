import java.util.Date;

/**
 * jv_45_date&time
 */
public class jv_45_date_time {

    public static void main(String[] args) {
        // Returns time in milliseconds since 1 jan 1970!
        System.out.println(System.currentTimeMillis());
        // returns current date!
        Date d = new Date();
        System.out.println(d);
    }
}