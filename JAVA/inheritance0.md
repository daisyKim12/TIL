# Inheritance

## Purpose of inheritance
In Java, Inheritance means creating new classes based on existing ones. A class that inherits from another class can reuse the methods and fields of that class. In addition, you can add new fields and methods to your current class as well.
The power of inheritance is that we can define a **common protocol to related classes**.

```java
class Friend { ... }

class UnivFriend extends Friend { ... }

class CompFriend extends Friend { ... }

class Driver {
    public static void main(String[] args) {
        Friend[] frns = new Friend[10];
        int cnt = 0;

        // can use comman class reference variable to point a different object that extends the same common class
        frns[cnt ++] = new UnivFriend(a,b,c);
        frns[cnt ++] = new UnivFriend(a,b,c);
        frns[cnt ++] = new CompFriend(a,b,c);
        frns[cnt ++] = new CompFriend(a,b,c);

        // easy to use a for loop for different object
        for(int i = 0; i < cnt; i++) {
            // because showInfo() is override, we can use the same method to do differnt job.
            frns[i].showInfo();
            Sustem.out.println()
        }
    }
}
```


Inheritance is “IS-A” type of relationship. “IS-A” relationship is a totally based on Inheritance, which can be of two types Class Inheritance or Interface Inheritance. Inheritance is a parent-child relationship where we create a new class by using existing class code. It is just like saying that “A is type of B”. For example is “Apple is a fruit”, “Ferrari is a car”.



## Syntax to inherite class.

**inheriting parent class using extends keyword**
```java
class Man {
    String name;
    public void tellName() {
        System.out.println("My name: " + name);
    }
}


class BusinessMan extends Man {
    String company;
    String position;
    public void tellInfo() {
        System.out.println("My company: " + company);
        System.out.pirntln("My position: " + position);
        tellName();
    }
}
```

**using parent class attribute and method in child object**
Object made my child class that extends parent class has the feild and method from both parent class and new ones from child class.
```java
BusinessMan man1 = new BusinessMan();
man1.name;
man1.company;
man1.position;
man1.tellName();
man1.tellInfo();
```

**explicitly call parent constructor using super keyword**
It is important to call th parent constructor because fields define in parent class is also used in child object but has to me initialize by a constructor. To call the constructor of a parent class, `super` keyword can be used. Inside a child constructor using `super()` will call the parent constructor, automatically initializeing fields define inside parent class but used in child class.

```java
class Man() {
    String name;
    public Man(String name) {
        this.name = name;
    }
}

class BusinessMan extends Man {
    String company;
    String position;
    public BusinessMan(String name, String company, String position) {
        super(name);
        this.company = company;
        this.position = position;   
    }

}
```

## Overriding
Overriding a method is to define a **same method** in both the `superclass` and the `subclass`, then the method of the subclass class overrides the method of the superclass. 

Method overriding is one of the ways by which Java achieves Run Time Polymorphism. **The version of a method that is executed will be determined by the object that is used to invoke it**. If an object of a parent class is used to invoke the method, then the version in the parent class will be executed, but if an object of the subclass is used to invoke the method, then the version in the child class will be executed. In other words, it is the type of the object being referred to (not the type of the reference variable) that determines which version of an overridden method will be executed.

To override a parent method the `name`, `parameter`, `return value` must be the same.

```java
class Cake {
    public void sweet() {
        System.out.println("xxx");
    }
}

class CheeseCake extends Cake {
    public void milky() {
        System.out.println("...");
    }
}

public class OverridingTest {
    public static void main(String[] args) {
        CheeseCake cake1 = new CheeseCake();
        Cake cake2 = new CheeseCake();

        //okay
        cake1.sweet();
        cake1.milky();
        //not allowed
        cake2.milky();
    }
}
```

```java
class Cake {
    public void yummy() {
        System.out.println("cake");
    }
}

class CheeseCake extends Cake {
    public void yummy() {
        System.out.println("cheese cake");
    }
}

public class OverridingTest {
    public static void main(String[] args) {
        CheeseCake cake1 = new CheeseCake();
        Cake cake2 = new CheeseCake();

        //same output
        cake1.yummy();
        cake2.yummy();
    }
}
```

**Adventages of Method Overriding**
1. Method overriding helps in writing a generic code based on the parent class. 
2. It provides multiple implementations of the same method and can be used to invoke parent class overridden methods using super keyword. 
3. It defines what behavior a class can have. 

**Method with a same name with different version by which class it belongs will define the behavior of class and method it possesses.**

**Annotation**
To insure certain funtion is for overriding a parent funtion annotation `@Override` is recommended.
```java
class ChildAdder extends ParentAdder {
    @Override
    public double add(double a, double b) {
        ...
    }
}
```

## protected
Protected access modifier only allows access for variable and method for the same package or for different package the class must extends the original class that has the protectes variable or method.

![diagram for protected](/X/Screenshot%202023-09-27%20at%201.03.13%20AM.png)

## final keyword
Using `final` we can prohibit extending certain class further.

```java
public final classs MyLastClass {
    ...
}
```