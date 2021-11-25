abstract class phone {
    public void phone() {
        System.out.println("Constructor of Phone class.");
    }

    public void greet() {
        System.out.println("Hello There!");
    }

    abstract void ringing();
}

class vivo extends phone {
    void ringing() {
        System.out.println("Vivo is Ringing...");
    }
}

public class jv_36_Abstract_class {

    public static void main(String[] args) {
        // Not allowed as phone is an abstract class.
        // phone newobj=new phone();
        vivo obj = new vivo();
        obj.ringing();
        obj.greet();
        obj.phone();
    }
}