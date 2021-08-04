/// Creating Three Classes..
//Overloading them..
/**
 * Inheritance_35
 */
class Base {
    public Base(int a) {
        System.out.println("I am the Constructor of Base Class.");
        System.out.println("The Value X = " + a);
    }
}

class Derived1 extends Base {
    public Derived1(int a, int b) {
        super(a);
        System.out.println("I am the Constructor of Derived1 Class.");
        System.out.println("The Value Y = " + b);
    }
}

class Derived2 extends Derived1 {
    public Derived2(int a, int b, int c) {
        super(a, b);
        System.out.println("I am the Constructor of Derived2 Class.");
        System.out.println("The Value Z = " + c);
    }
}

public class Inheritance_35 {

    public static void main(String[] args) {
        Derived2 d2 = new Derived2(2005, 3006, 4007);
    }
}
