import java.util.Scanner;

interface camera {
    void takesnap();

    void recordvideos();
}

interface WiFi {
    String[] getnetworks();

    void connectingtonetwork(String network);

    // Defaut Methods are not mandatroy to be overridden in all implementing
    // classes.
    default void somedefaultmethod() {
        System.out.println("\n\nThis is a default method.\n\n");
    }
}

class cellphone {
    void callnumber(Long phonenumber) {
        System.out.println("\n\nCalling... " + phonenumber + "\n\n");
    }

    void Takecalls() {
        System.out.println("Connecting...\n\n");
    }
}

class SmartPhone extends cellphone implements camera, WiFi {
    public void takesnap() {
        System.out.println("Taking Snaps..\n\n");
    }

    public void recordvideos() {
        System.out.println("Recording Videos...\n\n");
    }

    public String[] getnetworks() {
        System.out.println("Getting List of Available Networks...\n");
        String[] networklist = { "1.KK's Vivo z1 Pro", "2.Bunny's", "3.Mom's Jio", "4.Dad's Jio\n" };
        return networklist;
    }

    public void connectingtonetwork(String network) {
        System.out.println("\nConnecting to " + network + "\n");
    }
}

/**
 * jv_37_Interfaces
 */
public class jv_37_Interfaces {

    public static void main(String[] args) {
        SmartPhone Zolo = new SmartPhone();
        Scanner sc = new Scanner(System.in);
        Zolo.somedefaultmethod();
        System.out.println("\n\nEnter The Phone Number To Call:");
        long ph = sc.nextLong();
        Zolo.callnumber(ph);
        Zolo.Takecalls();
        Zolo.recordvideos();
        Zolo.takesnap();
        String[] str = Zolo.getnetworks();
        for (String string : str) {
            System.out.println(string);
        }
        System.out.println("Connect to?");
        int connectto = sc.nextInt();
        Zolo.connectingtonetwork(str[connectto - 1]);
        sc.close();
    }
}