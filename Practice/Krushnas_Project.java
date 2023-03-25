import java.util.Scanner;

public class Krushnas_Project {
    
    public static void main(String[] args) {
        // String str = "y";
        Scanner sc = new Scanner(System.in);
        int a = 0;
        // System.out.println(System.in.available());
        while (true) {
            // do {
            System.out.println("**Library Management System****");
            System.out.println("Press 1 to add a book");
            System.out.println("Press 2 to issue a book");
            System.out.println("Press 3 to return a book");
            System.out.println("Press 4 to print the complete etails of a book");
            System.out.println("Press 5 to exit");
            System.out.println("Enter any number");
            // int a = sc.nextInt();
            // sc.next();
            // System.out.println(sc.next());
            // int a = Integer.parseInt(sc.nextLine());
            // while (sc.hasNext()) {
            // a = sc.nextInt();

            if (sc.hasNext()) {
                a = sc.nextInt();
            } else
                a = sc.nextInt();
            System.out.println(a + "    abcd");
            switch (a) {
                case 1:
                    Library input1 = new Library();
                    input1.add();
                    // sc.nextLine();
                    break;
                case 2:
                    Library input2 = new Library();
                    input2.issue();
                    break;
                case 3:
                    Library input3 = new Library();
                    input3.ret();
                    break;
                case 4:
                    Library input4 = new Library();
                    input4.detail();
                    break;
                case 5:
                    Library input5 = new Library();
                    input5.exit();
                    break;
                default:
                    System.out.println("Invalid input");
                    // }
            }
            System.out.println("Do you want to select next option? Y/N");
            // String str = sc.next();
            // sc.nextLine();
            // if (!str.equals("y"))
            // break;
            // sc.close();
        }
        // } while (z == 'y' || z == 'Y');
        // if (z == "n" || z == "N") {
        // Library l = new Library();
        // l.exit();
    }
}

class Library {
    static String str, b, date;
    static int a, c;

    void add() {
        System.out.println("Enter the book name, price, book_number");
        Scanner sc1 = new Scanner(System.in);
        // sc1.nextLine();
        // str = sc1.nextLine();
        // float price = sc1.nextInt();
        // float price = Integer.parseInt(sc1.nextLine());
        // int book_num = sc1.nextInt();
        // int book_num = Integer.parseInt(sc1.nextLine());
        // sc1.nextLine();
        sc1.close();
        // System.out.println("Your details is" + str + price + book_num);
    }

    void issue() {
        Scanner sc2 = new Scanner(System.in);
        System.out.println("Book name");
        str = sc2.nextLine();
        System.out.println("Book id");
        a = sc2.nextInt();
        sc2.nextLine();
        System.out.println("Enter the issue date");
        b = sc2.nextLine();
        System.out.println("How much book issued");
        c = sc2.nextInt();
        sc2.nextLine();
        System.out.println("Enter the return date");
        date = sc2.nextLine();
        sc2.close();
    }

    int getid() {
        return a;
    }

    void ret() {
        System.out.println("Enter student name and book_id");
        Scanner sc3 = new Scanner(System.in);
        // String name=sc3.nextLine();
        int book_id = sc3.nextInt();
        sc3.close();
        if (a == book_id) {
            System.out.println("Total book details");
            System.out.println("Book name::" + str);
            System.out.println("Book id::" + a);
            System.out.println("Issue date::" + b);
            System.out.println("Total number book issue::" + c);
            System.out.println("Book return date::" + date);
        } else {
            System.out.println("Please Enter correct id");
        }
    }

    void detail() {
        System.out.println("Book name::" + Library.str);
        System.out.println("Book_id::" + Library.a);
        System.out.println("Issue date::" + Library.b);
        System.out.println("Total book issued::" + Library.c);
        System.out.println("Book return date::" + Library.date);
    }

    void exit() {
        System.exit(0);
    }
}