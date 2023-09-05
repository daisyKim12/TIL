# Introduction in SQL

## Connecting PostgreSQL using School Server
[in-ui-ye-ji cluster](https://skkuoverflow.com/ko/posts/school/inuiyeji/)

Enter server
```
ssh swji.skku.edu -l {user ID} -p {port number}
{enter password}
```

Login PostgreSQL
```
psql -h localhost -U db{user ID[1:]}
{enter password}
```

## Shell, Command Prompt

### Shell
The shell is a command-line interface program that takes commands from the user as an input, processes the command, and prints out the output to the display. In most Linux systems, you will find bash (Bourne Again SHell) installed and is the default, Bash is an enhanced version of Unix shell program sh (shell).

### Terminal emulator
Simply put, a Terminal Emulator is a program that allows users to interact with shell in the graphical user interface (GUI) environment. 
Some familiar terminal emulators you might find in Linux distros are:

- Gnome-terminal
- Konsole
- xterm

### Command Prompt
Command prompt is an input field in the terminal emulator (CLI) which lets you input/issue commands. The command prompt provides some useful information to the user. Common command prompt format is `[username@hostname ~ ]$`

- username:
- hostname:
- ~: `~` represents home directory of currently loged in user. This part of the command prompt simply displays your current working directory.
- $: `$` means that I'm logged into this system as a regular user. The $ symbol is the default for regular users.
- #: Logged in as the 'root' user, the full prompt changes to [root@localhost ~]#. The # symbol is the prompt designation for the root account.


### psql Meta-commands

- `\l`: List existing databases.
  ![show database list](/TIL/X/Screenshot%20from%202023-09-05%2018-41-49.png)
- `\c`: Connects to a database name.
- ![connect database](/TIL/X/Screenshot%20from%202023-09-05%2018-43-39.png)
- `\q`: Quit the program.
- `\! {command}`: Execute Linux command.

Show table description
- `\d {table_name}`: Show information about a attribute and domain type of a table.
![\d](/TIL/X/Screenshot%20from%202023-09-05%2022-02-56.png)
- `\dt {table_name}`: Show the information about a table.
![\dt](/TIL/X/Screenshot%20from%202023-09-05%2022-02-47.png)

Load data using file
- `\i {file_name}`: Read file into query buffer. Execute SQL query uisng file.
- `COPY`: Load data into table. Table must be initially set and data must be in certain format(CSV)



### Create table and load data

Create table
```
\i {path}/DDL.sql
```
![create table](/TIL/X/Screenshot%20from%202023-09-05%2019-16-24.png)

Load data
```
\i {path}/data.sql
```
![load data](/TIL/X/Screenshot%20from%202023-09-05%2019-21-27.png)

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

### DML: Data Manipulation Language

Select attribute in a table
```
select * from t1
```
![select all](/TIL/X/Screenshot%20from%202023-09-05%2022-12-29.png)
