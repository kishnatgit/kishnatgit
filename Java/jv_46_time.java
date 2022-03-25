import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

/**
 * jv_46_time
 */
public class jv_46_time {

    public static void main(String[] args) {
        LocalTime lt = LocalTime.now();
        System.out.println(lt);

        LocalDate ld = LocalDate.now();
        System.out.println(ld);

        LocalDateTime ldt = LocalDateTime.now();
        System.out.println(ldt);

        DateTimeFormatter ldtf = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        DateTimeFormatter ldftm = DateTimeFormatter.ofPattern("H:m:s");
        String date = ldt.format(ldtf);
        System.out.println("\nDate: "+date);
        String time=ldt.format(ldftm);
        System.out.println("Time: "+time);
    }
}