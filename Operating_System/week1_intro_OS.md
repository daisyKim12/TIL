# Introduction of Operating Systems

## Function of OS
1. User Interface
2. Resource manamgement
3. Process management
4. Networking and Security
   
## Kernel in Operating Systems
Kernel is central component of an operating system that manages operations of computer and hardware. It basically manages operations of memory and CPU time. It is core component of an operating system. Kernel acts as a bridge between applications and data processing performed at hardware level using inter-process communication and system calls.

**major functions of kernel**
Function of kernel is Resource managing, and Process managing.
1. Resource management(H/W): Processor, Memory, I/O device
2. Process managing(S/W): File, messages

## OS Abstraction

1. Process
2. Virtual memory
3. File

### Process
Process is a running program that OS abstracts so that the user feels the running program is executing without no switching. But in reality OS uses `Context Switch`, which switches between processes to make the user feel two or more process is running without interfering each other.

### Virtual Memory
Virtual memory is a technology that makes it appear as though there is more memory available than there actually is. It was designed with the idea that even if an application is running, its entire contents do not need to be loaded into memory, allowing for execution. When an application runs, only a portion of it is loaded into memory, while the rest of the application remains on disk. In essence, the disk acts as a secondary storage (backing store) to RAM.

Ultimately, virtual memory combines fast and small memory (RAM) with a larger and slower memory (disk) to function as a single, large, and fast memory (virtual memory). 

### File
File is a basic unit which an operating system stores data. File is a sequence of bytes. Operating System uses abstraction of every data using file, and it helps OS to keep track of data it can utilize and I/O device it can utilize.

## Concurrency & Parrallelism

### Concurrency
Concurrency is executing multiple process at the same time, using processor alternately. So that each application thinks that it monopolies a single processor by itself. 

### Parrallelism
Supports multiple processors for the processes. Literally running two program in two processor.

### Hyperthreading System
A technique that allows a single CPU to execute multiple flows of control. It is done by having a harware architecture which has multiple copies of some of the CPU harware such as register and PC in a single CPU. This helps switching between process more easy, having very short thread-switching time.

### SIMD parallelism
SIMD is short for Single-Instruction Multiple-Data. Allows a single instruction to cause multiple operations to be performed in parallel
