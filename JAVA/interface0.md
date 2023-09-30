# Interface

## What is interface
An Interface in Java programming language is defined as an abstract type used to specify the behavior of a class.
An interface in Java is a blueprint of a behavior. A Java interface contains static constants and abstract methods.

## Basic interface implementation
```java
interface Printable {
    // Every variable inside a interface is assumed as public, static, final
    // So the value has to be initialized and can't be changed.
    int PAPER_WIDTH = 70;
    int PAPER_HEIGHT = 120;

    // Method inside interface is a abstract method, method without no body.
    public void print(String doc);
}
```
```java

class PrinterDriver implements Printable {
    //all the abstract method defined inside a interface must be override in a class that implements the interface
    @Override
    Public void print(String doc) {
        System.out.print("doc: " + doc);
    }
}
```
