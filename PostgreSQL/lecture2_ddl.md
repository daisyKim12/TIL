# DDL


### DDL: Data Definition Language
Data definition language allows the specification about relations.

**Major role**
- Make schema
- Set domain of value
- Integrity constraints
- set indexes to be maintained for each relations
- Security
- Set physical storage structure

**Domain Type in SQL**
- char(n), varchar(n): Data type for string type
- int, smallint: Data type for integer
- numeric: Data type for float data

Create table
```
create table T1(
    ID char(5),
    name varchar(20) not null,
    department varchar(20))
    primary key(ID),
    foreign key(name) references departments
```

Insert tuple in a table
```
insert into T1 values('11111', 'Kim', 'Biology);
```

Drop, Delete table
- `drop table t1`: Drop is to delete the schema and its contents.
- `delete from t1`: Delete is to only delete the contents

Alter a table is to change the configuration of a table.
- `alter table r add A D`
- `alter table r drop A`

## Primary Key & Foreign Key

- Key: Attribute(s) uniquely identify a record in a table
- Superkey: Any subset of R(relation schema), K is a superkey if values for K are sufficient to identify a unique tuple in relation R.
- Candidate Key: Minimal superkey is called candidate key
- Primary Key: One of the candidate keys is selected to be the primary key
- Foreign Key: Primary key of another key, but not a primary key in current relation is called foreign key.



