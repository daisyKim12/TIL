# Exception Handling

## What is Exception
Error is usually a programmers mistake, such as syntax error which will me checked when compiling. But Exeption is not a mistake compiler can ditect. In Java, an exception is an event that disrupts the normal flow of the program. When a exception occurs it creates a `Exception` object and when this object is not handeled properly the program ends forcefully.

**Throwable class**
The root class that every exception class inherits.
    - `getMessage()`: Prints the information for the programmer to see about the exception and how to handle it.
    - `printStackTree`: Prints the information where the exception occurs.


**type of exception**
The root calss of exception class is `Throwable` class. And there are three child class that inherits `Throwable` class, which are the big three classification of exceptions.
1. Exception that inherits `Error` class.
    Error class is a collection of fatal error that programmer cannot handle, such as `VirtualMachineError` and `IOError`. So we do not handle these using `try catch` statement. It is more natural to end the program when these error occurs.

2. Exception that inherits `Exception` class.
    
3. Exception that inherits `RuntimeException` class.
   This exception occurs wile runtime. RuntimeException is the superclass of those exceptions that can be thrown during the normal operation of the Java Virtual Machine. This exception is related to programmers mistake in algorithm or syntax so it is more natural to end the program when these error occurs and not handle the exception.
    - ArithmeticException
    - ClassCastException
    - IndexOutOfBoundsException
    - NegativeArraySizeException
    - NullPointerException
    - ArrayStoreException


## try catch statement
**Where do we use try statement**
There are some situation where Exception object that inherits `Exception` class might be created. In this case not a single code but a group of code where exception might occur, or a group of code that must be treated as one(such as trasaction) must be tested before excuction. In this case this group of code is covered by try statement to handle exception object.

**finally**
`finally` statement is used when there is a piece of code that must be executed when code inside a try statment is tested. But after JAVA 7 `try-with-resource` was introduced and more popularily used.

**try-with-resource**
Using `resource` inside try statement, we can assign object that is used inside a try statement and that must be closed afterwards. 

```java
try(BufferWriter writer = Files.newBufferWriter(file)) {
    writer.write('A');
    writer.write('B');
} catch(IOExecption e) {
    e.printStackTree();
}
```

## throws
If method are called multiple times and there is a `try catch` statement inside a method we must define which method the exception object must be handled. So we throws the exception object to other method in order to handle object in different method.
```java
class Q {
    public static void main(String[] args) {

        //where the exception is handled
        try {
            md1();
        } catch(IOException e) {
            e.printStackTree();
        }
    }
    public static void md1() throws IOException {
        md2();
    }
    public static void md2() throws IOException {

        // where the exception might occur
        Path file = Paths.get("...");
        BufferWriter writer = null;
        writer = Files.newBufferedWriter(file);
        writer.write('A');
        writer.close();
    }
}
```

```java
class J {
     public static void main(String[] args) {

        //where the exception is handled
        try {
            md1();
        } catch(MyException e) {
            e.printStackTree();
        }
    }
    public static void md1() throws MyException {
        Scanner kb = new Scanner(System.in);
        int age = kb.nextInt();

        //create a exception object and throws to create exception
        if(age < 0)
            throws new MyException();
    }
}
```

