# Class

## what is Class in OOP
A class in Java is a set of objects which shares common characteristics/ behavior and common properties/ attributes. 
- It can define common variable and methods objects can share. 
- Also class is user-defined blueprint from which objects are created.

**Properties of Java Classes**
1. Class is not a real-world entity. It is just a template or blueprint or prototype from which objects are created.
2. Class does not occupy memory.
3. Class is a group of variables of different data types and a group of methods.
4. A Class in Java can contain:
- Data member
- Method
- Constructor
- Nested Class
- Interface


## Basic Class format
```
class MyClass {
    // Instance Variables
    String name;
 
    // Constructor
    public Dog(String name)
    {
        this.name = name;
    }
 
    // Instance method
    public String getName() { return name; }
}
```

__CAUTION__: Instance variable and Local variable are different. Instance varialble is a variable managed by a object, but local variable is a variable inside a method restrain by method scope.

## Making a Instance
Instance of a class can be made by `new` keyword, but in order to use the instance that is created and saved in a memory, **Reference variable** must point that instance created.

```
BankAccount myAccount1 = new BankAccount();
```

So if 2 reference variable is pointing the same instance, any operation done by both reference variable will affect the same object.
```
BankAccount ref1 = new BankAccount();
BankAccount ref2 = ref1;
```

## Constructor
Constructor is a method that is called when making a instance using a class and initilizing a object when creating a object.
- Name of constructor method must be the name of a class
- Constructor method do not have a return value. And do not have output type `void`

```
public class Dog {
    // Instance Variables
    String name;
    String breed;
    int age;
    String color;
 
    // Constructor
    public Dog(String name, String breed, int age,
               String color)
    {
        this.name = name;
        this.breed = breed;
        this.age = age;
        this.color = color;
    }
}
```

## Package
A package in Java is used to group related classes. Think of it as a folder in a file directory. We use packages to avoid name conflicts, and to write a better maintainable code. Packages are divided into two categories.

**import a package**
```
import package.name.Class;   // Import a single class
import package.name.*;   // Import the whole package
```

```
import java.util.Scanner;

class MyClass {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);
    System.out.println("Enter username");

    String userName = myObj.nextLine();
    System.out.println("Username is: " + userName);
  }
}
```

**make user-define package**
```
package mypack;
class MyPackageClass {
  public static void main(String[] args) {
    System.out.println("This is my package!");
  }
}
```

compile the package
```
C:\Users\Your Name>javac -d {destination to save the package} MyPackageClass.java
```

run the class file inside a package
```
C:\Users\Your Name>java mypack.MyPackageClass
```

## Access Level Modifier
Access level modifier limits the accessablity of a changing and extracting value from an instance variable. And for instance method access level modifier limits the call of a method.

**level of protectablity**
public > protected > default > private

**class level modifier**
- public: Can make an instance from any class in any package.
    1. Only one public class is allowed in a single source file.
    2. The name of a public class must match with the name of the source file.
- default: Can make a instance only from the same packagae.

**variable level modifier**
- public: Variable can me accessed from anywhere.
- protected: Can be accessed by classes with inheritance relationship.
- private: Private variable can me accessed in the same class.
- default: Can be accessed from same package.

**method level modifier**
- public: Method can me called from anywhere.
- protected: Can be called by classes with inheritance relationship.
- private: Private method can me accessed in the same class.
- default: Can be called from same package.

## Static
Static variable and static method is a member of class that is independent of the creation of instance.
 
- Static variable: Static variable is a variable that every instance shares. So if you need a variable that has to me accessed by instances created by a same class it might be a good idea to use static variable.
**define a static variable**
```
class A {
  static int num = 0;
}
```
**accessing static variable**
```
A a_instance = new A();
a.num ++;
A.num ++;
```
1. access by instance
2. access by class name

- Static method: Static method is a method that is independent from instance. Class only group these static method inside itself but has no hard control over them. These methods are not belongs to any object. And it cannot access or change instance variable but can access static variable.

**define a static method**
```
class B {
  static void showInt(int n) {
    System.out.println(n);
  }
}
```

**calling static method**
```
B b = new B();
b.showInt(1);
B.showInt(2);
```

