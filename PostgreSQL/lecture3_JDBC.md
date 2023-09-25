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
java -cp .:./lib/postgresql-42.6.0.jar JDBC1_create
```

## Establish Connection with Database
```
Connection conn = DriverManger.getConnection( "jdbc:postgresql://localhost/bd_name", userid, pw);
```

## Executing SQL statement
To execute sql statement one must make a `Statement` object. `Statement` object executes sql query and manage series of query but cannot interpret or give connection information to the user.

**Types of Statement**
[Statment explanation](https://wonderful1003.tistory.com/2)
1. `Statement`: Not used because have to enter full sql string and string concat is vulnerable to `SQL injection`.
2. `PrepareStatment`: Good for taking input from the user, it receives argument and allows formatting a sql statemnet. Invulnerable to `SQl injection` attack.
3. `CallableStatement`: The CallableStatement of JDBC API is used to call a stored procedure. A Callable statement can have output parameters, input parameters, or both.


### Using Statement object
1. Create `Statement` object
   ```java
   Statement stmt = conn.createStatement();
   ```
2. `executeUpdate`: Execute query without return valuse, without `select` statment
    ```java
    stmt.executeUpdate("insert into instructor values ('77978', 'Kim', 'Physics', 98000)");
    ```
3. `executeQuery`: Execute query with return valuse, with `select` statment
    ```java
    ResultSet rset = stmt.executeQuery("select dept_name from instructor");
    while(rset.next())
        System.out.println(rset.getString(1));
    ```
    ```
    rset.getString({Attribute_name}) == rset.getString(1)
    ```

### Using PreparedStatement
```java
PreparedStatment pStmt = conn.prepareStatement (
    "insert into instructor value(?,?,?,?)"
)

pStmt.setString(1, "~~~");
pStmt.setString(2, "~~~");
pStmt.setString(3, "~~~");
pStmt.setInt(4, "~~~");

// sql statment without select statment use executeUpdate()
pStmt.executeUpdate();
// sql statment with select statment use executeQuery()
pStmt.executeQuery();

```


## Get Metadata
1. Retrieving metadata from table
   - getMetaData()
   - getColumnCount()
   - getColumnName(index)
   - getColumnTypeNmae(index)
   ```java
   ResultSetMetaData rsmd = rset.getMetaData();
   for(int i = 1, i <= rsmd.getColumCount(); i++) {
        System.out.println(rsmd.getColumnName(i));
        System.out.println(rsmd.getColumnTypeName(i));
   }
   ```
2. Retrieving metadata from database

    ```java
    DatabaseMetaData dbmd = conn.getMetaData();

    ```
## Transaction
```
conn.getAutoCommit(false);

// To start transition just start executing statement
~~~

// if wanted to commit
conn.commit()
// if rollback
conn.rollback()
```