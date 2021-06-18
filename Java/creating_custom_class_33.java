import java.util.Scanner;

/**
 * creating_custom_class_33
 */
class Employee {
    Scanner sc = new Scanner(System.in);
    int id, salary;
    String name;

    public void get_details() {
        System.out.println("Employee ID- " + id + "\nEmployee Name- " + name + "\nEmployee Salary- " + salary + "\n");
    }

    public int get_salary() {
        return salary;
    }

    public void name_change() {
        System.out.println("Change The Name of Above Employee:");
        name = sc.nextLine();
        System.out.println("Details after name change is:");
        get_details();
        // return name;
    }
}

public class creating_custom_class_33 {

    public static void main(String[] args) {
        Employee emp1 = new Employee();
        Employee emp2 = new Employee();
        Employee emp3 = new Employee();
        System.out.println("\n\nThe Employee Details are:\n\n");
        emp1.id = 001;
        emp1.name = "Dinesh Gouda";
        emp1.salary = 50000;
        emp2.id = 002;
        emp2.name = "Purna Chandra Panigrahy";
        emp2.salary = 52000;
        emp3.id = 003;
        emp3.name = "Gyanarmaya Padhy";
        emp3.salary = 49000;
        emp1.get_details();
        emp2.get_details();
        emp2.name_change();
        emp3.get_details();
        System.out.println("Salary of Emp1 is: " + emp1.get_salary());
    }
}