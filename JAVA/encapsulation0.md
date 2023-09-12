# Encapsulation

## What is encapsulation
Encapsulation in Java is the process by which **data (variables)** and **the code that acts upon them (methods)** are integrated as a single unit. By encapsulating a class's variables, **other classes cannot access them**, and only the **methods of the class can access them.**

In Java, encapsulation is achieved by declaring the instance variables of a class as private, which means they can only be accessed within the class. To allow outside access to the instance variables, public methods called getters and setters are defined.


```
class Person {
	private String name;
	private int age;

	public String getName() { return name; }

	public void setName(String name) { this.name = name; }

	public int getAge() { return age; }

	public void setAge(int age) { this.age = age; }
}

public class Main {
	public static void main(String[] args)
	{
		Person person = new Person();
		person.setName("John");
		person.setAge(30);

		System.out.println("Name: " + person.getName());
		System.out.println("Age: " + person.getAge());
	}
}
```