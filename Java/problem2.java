// package package2;

import package1.problem1;

public class problem2 extends one {

    public static void main(String[] args) {
        problem1 obj = new problem1();
        // // Cannot be Accessed!
        // // System.out.println(obj.n);
        // // System.out.println(obj.m);
        // // System.out.println(obj.o);
        System.out.println(obj.x);

    }
}
