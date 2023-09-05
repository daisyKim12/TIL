# JAVA basic

## Introduction of JAVA
- Java runs on JVM(Java Virtual Machine) which runs on top of Operating System so Java program runs independent of Operating System type.
- Java is a OOP(Object-Oriented Programming) language. So every code and data is manage by object and class. And by interacting between objects implementing complicated logic. OOP language has lots of adventages.
  - Easy reparing code.
  - Can use OOP functions such as Inheritance, Class, Encapsulation, Polymorphism.
- Manages memory autometically so there is no need to delete objects manually.

## How to install JDK(Java Development Kit) 17

Install JDK 17
```
sudo apt update
sudo apt install openjdk-17-jdk
```

Check JAVA version
```
java -version
```

Set env path
```
sudo vi/etc/environment
```
```
PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin"
JAVA_HOME="/usr/lib/jvm/java-17-openjdk-amd64"
```

Check env path settings
```
source /etc/environment
echo $JAVA_HOME
```

## How to run JAVA program

Compile `.java` file
```
javac Test.java
```

Execute `.class` file
```
java Test
```