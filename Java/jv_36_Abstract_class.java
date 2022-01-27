abstract class phone {
    public phone() {
        System.out.println("Constructor of Phone class.");
    }

    public void greet() {
        System.out.println("Hello There!");
    }

    // Abstract Methods Cannot have a Body.
    abstract void ringing();
}

class vivo extends phone {
    @Override
    void ringing() {
        System.out.println("\nVivo\n\nVivo is Ringing...");
    }

    public void phone() {

    }
}

class Oppo extends phone {
    public void Vibrating() {
        System.out.println("\nOppo\n\nYour Phone is Vibrating....\n\n");
    }

    // If not overridden ringing() class Oppo should be declared as an abstract
    // class.
    @Override
    public void ringing() {
        System.out.println("Your Phone is Ringing....");
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
        Oppo op = new Oppo();
        op.Vibrating();
    }
}