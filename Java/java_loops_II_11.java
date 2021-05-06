import java.util.Scanner;

/**
 * java_loops_II_11
 */

import java.util.Scanner;
public class java_loops_II_11 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int new_line = sc.nextInt();
        for(int i=0;i<new_line;i++){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int n=sc.nextInt();
            int ans=a;
            for(int k=0;k<n;k++){
                ans=ans+b*(int)Math.pow(2, k);
                System.out.print(ans+" ");
            }
            System.out.println();
        }        
    }
}