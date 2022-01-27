import java.util.Scanner;
public class jv_13_java_datatypes {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter The No. of times to be inputted:");
        int number_of_tries=scan.nextInt();
        for(int i=0;i<number_of_tries;i++){
            try {
                System.out.println("Enter The Number To Be Tested.");
                long x=scan.nextLong();
                System.out.println(x+" Can be Fitted in:");
                if(x>=-128 && x<=127)System.out.println("* byte");
                if(x>=-32768 && x<=32767)System.out.println("* short");
                if(x>=-2147483648 && x<=2147483647)System.out.println("* int");
                if(x>=-9223372036854775808L && x<=9223372036854775807L)
                System.out.println("* long");
            } 
            catch (Exception e) {
                System.out.println(scan.nextLine()+" -Can't Be Fitted Anywhere.");
            }
        } scan.close();
    }
}