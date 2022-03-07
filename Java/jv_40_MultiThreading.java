class thread1 extends Thread {
    public void run() {
        int i = 0;
        while (i <= 50) {
            System.out.println("Code 1 is Running");
            i++;
        }
    }
}

class thread2 extends Thread {
    public void run() {
        int i = 0;
        while (i <= 50) {
            System.out.println("Code 2 is Running");
            i++;
        }
    }
}

/**
 * jv_40_MultiThreading
 */
public class jv_40_MultiThreading {

    public static void main(String[] args) {
        thread1 obj1 = new thread1();
        thread2 obj2 = new thread2();
        // obj1.run();
        // obj2.run();
        // Multithreading
        obj1.start();
        obj2.start();
    }
}