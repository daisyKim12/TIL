# Inheritance

## Purpose of inheritance
In Java, Inheritance means creating new classes based on existing ones. A class that inherits from another class can reuse the methods and fields of that class. In addition, you can add new fields and methods to your current class as well.
The power of inheritance is that we can define a common protocol to related classes. 

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
Overriding a method is to define a same method in both the superclass and the subclass, then the method of the subclass class overrides the method of the superclass. 

Method overriding is one of the ways by which Java achieves Run Time Polymorphism. The version of a method that is executed will be determined by the object that is used to invoke it. If an object of a parent class is used to invoke the method, then the version in the parent class will be executed, but if an object of the subclass is used to invoke the method, then the version in the child class will be executed. In other words, it is the type of the object being referred to (not the type of the reference variable) that determines which version of an overridden method will be executed.

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

**where does overriding is used**