
import java.util.*;

//Abstraction
abstract class Employee {
    private String name;
    private int id;

    public Employee(String name, int id) { // Constructor
        this.name = name;
        this.id = id;

    }

    // abstract function must be implemented by subclass
    public abstract double calculateSalary();

    public String getName() {
        return name;
    }

    public int id() {
        return id;
    }

    public void displaydetails() {
        System.out.println("Employee ID: " + id);
        System.out.println("Employee Name: " + name);
        System.out.println("Employee Salary: " + calculateSalary());

    }
}

// Inheritance
class FullTime extends Employee {
    private double annualSalary;

    public FullTime(String name, int id, double annualSalary) {
        super(name, id);
        this.annualSalary = annualSalary;
    }

    // Implementing the abstract method
    @Override
    public double calculateSalary() {
        return annualSalary;
    }
}

class PartTime extends Employee {
    private double hourlyRate;
    private int hoursWorked;

    public PartTime(String name, int id, double hourlyRate, int hoursWorked) {
        super(name, id);
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }

    public double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
}

// Polymorphism : Using method Overloading
class ContractEmployee extends Employee {
    private double contractAmount;

    public ContractEmployee(String name, int id, double contractAmount) {
        super(name, id);
        this.contractAmount = contractAmount;
    }

    public double calculateSalary() {
        return contractAmount;
    }
}

public class Main {
    public static void main(String args[]) {
        // Creating instances of different types of Employess
        Employee e1 = new FullTime("Shivam", 100, 1000000);
        Employee e2 = new PartTime("Aman", 101, 2000, 20);
        Employee e3 = new ContractEmployee("Aditi", 103, 500000);

        // Displaying Details of Each employee
        e1.displaydetails();
        System.out.println();
        e2.displaydetails();
        System.out.println();
        e3.displaydetails();
    }

}
