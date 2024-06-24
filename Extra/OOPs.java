import java.util.*;

/**
 * OOPs
 */
// class Student {
// String name;
// int age;

// public void info() {
// System.out.println(this.name);
// System.out.println(this.age);
// }

// // constructor
// Student(String name, int age) {
// this.name = name;
// this.age = age;
// }

// // copy constructor
// Student(Student s2) {
// this.name = s2.name;
// this.age = s2.age;
// }

// Student() {

// }

//// Polymorphism :- Do same work with different types
//// Function Overloading :- Make same function with same function name inside
//// the
//// same class

// public void info(String name) {
// System.out.println(name);
// }

// public void info(int age) {
// System.out.println(age);
// }

// public void info(String name, int age) {
// System.out.println(name + " " + age);
// }
// }

//// inheritance

//// Single Level inheritance starts
class Shape {
    // String color;
    public void area() {
        System.out.println("Area");
    }
}

class Triangle extends Shape {
    public void area(int l, int h) {
        System.out.println(1 / 2 * l * h);
    }

}

//// Single Level inheritance ends

class EquilateranlTriangle extends Shape {
    public void area(int l, int h) {
        System.out.println(1 / 2 * l * h);

    }

}
//// Multiple inheritance end

//// Hierarchical Inheritance include Triancle class Starts
class Circle extends Shape {
    public void area(int r) {
        System.out.println(3.14 * r * r);
    }
}

//// Hierarchical Inheritance include Triancle class end

//// Abstraction starts
abstract class Animal {
    abstract void walk();
}

class Horse extends Animal {
    public void walk() {
        System.out.println("Horse is walking");
    }
}

class Chicken extends Animal {
    public void walk() {
        System.out.println("Chicken is walking");
    }
}
//// Abstraction code end

public class OOPs {
    public static void main(String[] args) {

        // Student s1 = new Student();
        // s1.name = "Shivam";
        // s1.age = 20;

        // // Student s2 = new Student(s1);

        // // polymorphism
        // s1.info(s1.name);
        // s1.info(s1.name, s1.age);

        //// inheritance
        // Circle c1 = new Circle();
        // c1.area(20);

        // EquilateranlTriangle t1 = new EquilateranlTriangle();
        // t1.area(2, 2);

        //// Abstraction
        Horse h1 = new Horse();
        h1.walk();

    }

}
