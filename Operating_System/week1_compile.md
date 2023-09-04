# Compile
Compile is to change text file that has a program code into binary file executable in a certain processor.

## GCC
GCC is short for  GNU Compiler Collection which is a optimizing compiler produced by GNU Poject.

**example**
```
// make a executionable file named hello using hello.c 
gcc -o hello hello.c
```

**gcc options**
-gcc file_name.c: compile a file into execution file, with default name 'a'
-gcc -c object_name file_name.c: Make object file.
-gcc -o execution_name object_name: Make execution file using object file.

-S: make .s file
-c: make .o file
-v: show how gcc compiles step by step

**cpp options**
x

**cc1 options**
x

**as options**
x

**link options**
-1: Set library name
-L: Set library path
-shared: Make shared library
-fPIC: Used when making shared library. Make a object file suitable for making shared library


## Stage of compile
1. Preprocessing: Done by Preprocessor(cpp), produces pure C-language program exchange dirctives.
2. Compile: Done by Compiler(cc1), produces assembly language program
3. Assemble: Done by Assembler(as), produces relocatable object(object file)
4. Link: Done by Linker(ld), produces executable program


## Shell
Shell is a command interpreter used in UNIX. It opens a prompt and waits for a command to be input. When a command in entered it executes.
1. STORE: Stores the command entered by the prompt in main memory.
2. EXECUTE: Checks the first word in the command line corresponds to built in shell command. And when it is, runs the command by itself.
3. LOAD AND EXECUTE: When it is not, loads the executable file in a main memory and runs it.
4. Waits for the command to terminate.
5. Prompts agains.