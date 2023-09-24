# JDBC

## What is JDBC
Java™ database connectivity (JDBC) is the JavaSoft specification of a standard application programming interface (API) that allows Java programs to access database management systems. The JDBC API consists of a set of interfaces and classes written in the Java programming language.
Using these standard interfaces and classes, programmers can write applications that connect to databases, send queries written in structured query language (SQL), and process the results.
Since JDBC is a standard specification, one Java program that uses the JDBC API can connect to any database management system (DBMS), as long as a driver exists for that particular DBMS.

## Connecting JDBC driver
In order to use JDBC API certain package and library must be include

**import package**
```
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.SQLException;
import java.sql.ResultSet;
```


**JDBC Driver**
Contact the vendor of your database to obtain a JDBC driver for your DBMS. Inside a java project JDBC driver must be inside `/lib` directory. 
[Postgresql Driver](https://jdbc.postgresql.org/download/)

**Check the Classpath for driver**
Ensure that you are using the correct syntax for specifying the classpath with the -cp option.
```
java -cp .:./lib/postgresql-42.6.0.jar JDBC1_create\
```