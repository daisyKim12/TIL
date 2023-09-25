# PL/SQL
PL/SQL stands for Procedural Language extensions to the Structured Query Language (SQL).


## Stored Procedure and Fuctions
Both stored procedures and functions are database objects which contain a set of SQL statements to complete a task. In many ways, both are different from each other. 

### Stored Procedure
Stored Procedure is a prepared SQL code that you can save, so the code can be reused over and over again.
It is pre-compiled objects which are compiled for the first time and its compiled format is saved, which executes (compiled code) whenever it is called.


### Functions
Functions in SQL Server are the database objects that contains a set of SQL statements to perform a specific task. A function accepts input parameters, perform actions, and then return the result. We should note that functions always return either a single value or a table

1. Scalar Functions
    
    ```sql
    CREATE OR REPLACE FUNCTION total_student()
    RETURN integer AS $$

    DECLARE
        total integer;
    BEGIN
            select count(*) into total from student;
            return total;
    END;
    $$
    LANGUAGE plpgsql;
    ```
    
2. Table-Valued Functions

```sql
    CREATE OR REPLACE FUNCTION instructors_of(dname char(20))
    RETURN TABLE(
            ID varchar(5), name varchar(20), dept_name varchar(20), salary numeric(8,2)
    ) AS $$

    BEGIN
        RETUREN QUERY
            select  INS.ID, INS. name, INS.dept_name, INS.salary
            from instructor AS INS
            where INS.dept_name = instructors_of.dname;
    END;
    $$
    LANGUAGE plpgsql;
    ```