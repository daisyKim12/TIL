# Introduction in SQL

## Shell, Command Prompt

### Shell
The shell is a **command-line interface program** that takes commands from the user as an input, processes the command, and prints out the output to the display. In most Linux systems, you will find bash (Bourne Again SHell) installed and is the default, Bash is an enhanced version of Unix shell program sh (shell).

### Terminal emulator
Simply put, a Terminal Emulator is a program that allows users to **interact with shell** in the graphical user interface (GUI) environment. 
Some familiar terminal emulators you might find in Linux distros are:

- Gnome-terminal
- Konsole
- xterm

### Command Prompt
Command prompt is an **input field in the terminal emulator** which lets you input/issue commands. The command prompt provides some useful information to the user. Common command prompt format is `[username@hostname ~ ]$`

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



psql -U daisy12 -h localhost testdb                                                      127 ✘  10:57:10  

1. Create a Database
On starting postgresql first time default database `postgres`` will be created.
```
createdb -U daisy12 daisy12
```

```
psql -U your-username -d your-database-name
```

1. Stop PostgreSQL server in local
