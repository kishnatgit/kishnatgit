
/**
 * methods_23
 */
import java.util.Scanner;

public class jv_23_methods {

static int call(int x,int y){
    int sum;
    if(x>y){
        sum=x+y;
    }
    else{
        sum=(x+y)*10;
    }
    return sum;
}
    public static void main(String[] args) {
        int a,b,a1,b1,sum1,sum2;
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter values into a,b,a1,b1: ");
        a=scan.nextInt();
        b=scan.nextInt();
        sum1=call(a,b);
        a1=scan.nextInt();
        b1=scan.nextInt();
        sum2=call(a1,b1); 
        System.out.println(sum1);
        System.out.println(sum2);
    }
}    