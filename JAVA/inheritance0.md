# Inheritance

## Purpose of inheritance
In Java, Inheritance means creating new classes based on existing ones. A class that inherits from another class can reuse the methods and fields of that class. In addition, you can add new fields and methods to your current class as well.
The power of inheritance is that we can define a common protocol to related classes. 

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
