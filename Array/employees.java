import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

class Employee implements Serializable {
    private static final long serialVersionUID = 1L;
    private String name;
    private int id;
    private String designation;
    private double salary;
    public Employee(String name, int id, String designation, double salary) {
        this.name = name;
        this.id = id;
        this.designation = designation;
        this.salary = salary;
    }
    @Override
    public String toString() {
        return "Name: " + name + ", ID: " + id + ", Designation: " + designation + ", Salary: " + salary;
    }
}
public class employees {
    private static final String FILENAME = "employeedata.txt";
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("File is created! \nSelect and option from menu to enter the data of an employee:");
        ArrayList<Employee> employees = new ArrayList<>();
        int choice;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Add an Employee");
            System.out.println("2. Display All Employees");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    Employee(scanner, employees);
                    break;
                case 2:
                    showEmployee(employees);
                    break;
                case 3:
                    storeEmployee(employees);
                    System.out.println("Data Saved! Exiting the program!");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 3);
        scanner.close();
    }
    private static void Employee(Scanner scanner, ArrayList<Employee> employees) {
        System.out.print("Enter employee name: ");
        String name = scanner.next();
        System.out.print("Enter employee ID: ");
        int id = scanner.nextInt();
        System.out.print("Enter employee designation: ");
        String designation = scanner.next();
        System.out.print("Enter employee salary: ");
        double salary = scanner.nextDouble();

        Employee employee = new Employee(name, id, designation, salary);
        employees.add(employee);
    }
    private static void showEmployee(ArrayList<Employee> employees) {
        System.out.println("\nAll Employees:");
        for (Employee employee : employees) {
            System.out.println(employee);
        }
    }

    private static void storeEmployee(ArrayList<Employee> employees) {
        try (PrintWriter writer = new PrintWriter(new FileWriter(FILENAME))) {
            for (Employee employee : employees) {
                writer.println(employee);
            }
        } catch (IOException e) {
            System.out.println("Error saving employees to file: " + e.getMessage());
        }
    }
}
