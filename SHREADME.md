# Simple Shell Directory

- This directory illustrates the functions and operations of a simple `shell`
- The `shell` is a command line interface (CLI) program that takes commands from the keyboard and gives them to the operating system to perform.
- Essentially, a 'simple shell' would perfom two important tasks:<br> 
° Taking commands<br>
° Sending prompts

## PID and PPID

- The `shell` also handles processes.
- a `PID`is just an id of a process, that would make a `PPID`an id of the parent process.
- In a multi-process program, a parent process creates one or more child processes using a system call such as `fork()`.
- The child process is a new process that is a duplicate of the parent process. 
- However, there are some differences between a child and parent process: 

    1. The child process has a new, unique process ID (PID).
    2. The child process has a new copy of the parent process's memory 3. space, with the same code and data segments, but a separate stack and heap.
    4. The child process has a copy of the parent process's file descriptor table, with its own set of open file descriptors.
    The child process has its own signal mask, independent of the parent process.

- It is wise to note that the parent process does not depent on the child.
- If the child were to mulfunction, the parent prOcess would not be affected. 
- It is otherwise if the parent process malfunctions. The child process will malfunction too.

## File Handling

- We deal with two types of files in our system:<br>
  ° `Text files` - the contents within the file as plain text. You can easily edit or delete the contents. They take minimum effort
    to maintain, are easily readable, and provide the least security and takes bigger storage space. **(.txt)**<br>
    
  ° `Binary files`- Instead of storing data in plain text, they store it in the binary form (0's and 1's). They can hold a higher
    amount of data, are not readable easily, and provides better security than text files. 
    **(.bin)**<br>

### File descriptors
- Non-negative integer values of the `POSIX API.
- The program usually has predetrmined file descriptors that run immediately as the program runs.
- `STDIN_FILENO` - symbolic constant of value `0`, stdin in stdlib stream.
- `STDOUT_FILENO`- symbolic constant of value `1`, stdout in stdlib stream.
- `STDERR_FILENO`- symbolic constant of value `2`, stderr in stdlib stream.
- When more files are opened, the start at value `3` onward.
- We need to note how the program tells the end of a file, as it comes in handy when our shell interacts with and handles files.

- Every file has a rather logical (not physical) value at the very end called the END-OF-FILE / EOF value.

- Operating systems and file sytems can pick up this EOF marker, and know they reached the end of a file.

## System call vs Function call

`System call` 
- allows a user-level process to request a service from the kernel of the operating system.
- When a user-level process needs to access a system resource or perform an operation that requires privileged access, it cannot directly access the system resource or perform the operation
- it makes a system call, which transfers control to the `Kernel`, which performs the operation for the user.
- The `Kernel`is the overseer of the `CPU`, ensuring smooth operation by the computer.

`Function call`
- calls a subroutine within a program.
- When a function is called, control is transferred to the subroutine, which performs a specific task and then returns control to the calling function.

**Overall, system calls are faster than function calls as they do not need to run programs and open files. They access the system directly. Use them wisely.**

## Builtin vs Executable
- There are functions and commands that the shell uses to operate and interacte with the user.
- These can be broken down into two fundamnetal subgroups:<br>
    °Builtin - implemented within the shell itself and are executed within the shell's process.
    °Executables - separate programs that are executed as separate processes from the shell, usually stored in files.
- We can use the 'type' function to tell if a command is builtin or an executable.

```c
$ type ls
ls is /bin/ls

$ type echo
echo is a shell builtin
```

|Built-in | Executable|
|:-------:|:---------:|
|cd | access()|
|echo |chdir()|
|export|close()|
|exit|closedir()|
|history|execve()|
|jobs|_exit()|
|kill|fflush()|
|pwd|fork()|
|set|getcwd()|
|source|free()|
|type|getline()|
|ulimit|getpid()|
|umask|isatty()|
|unalias|kill()|
|unset|malloc()|
||open()|
||opendir()|
||perror()|
||read()|
||readdir()|
||signal()|
||stat(_xstat)|
||lstat(_lxstat)|
||fstat(_fxstat)|
||strtok()|
||wait()|
||waitpid()|
||wait3()|
||wait4()|
||write()|
||ls|
||grep|

## Project executable functions

`access()` : checks if a file or directory exists and if the process has permission to access it<br>

`chdir()` : changes the current working directory of the process<br>

`close()` : closes a file descriptor or a stream<br>

`closedir()` : closes a directory stream<br>

`execve()` : replaces the current process image with a new process image<br>

`exit()` : terminates the calling process with an exit status<br>

`_exit()` : terminates the calling process without executing cleanup routines<br>

`fflush()` : flushes the output buffer of a stream<br>

`fork()` : creates a new process by duplicating the calling process<br>

`free()` : deallocates memory previously allocated by malloc() or calloc()<br>

`getcwd()` : gets the current working directory of the process<br>

`getline()` : reads a line from a stream<br>

`getpid()` : gets the process ID of the calling process<br>

`isatty()` : checks if a file descriptor refers to a terminal<br>

`kill()` : sends a signal to a process or a group of processes<br>

`malloc()` : allocates memory dynamically<br>

`open()` : opens a file or creates it if it doesn't exist<br>

`opendir()` : opens a directory stream<br>

`perror()` : prints an error message to the standard error stream<br>

`read()` : reads data from a file descriptor or a stream<br>

`readdir()` : reads the next entry from a directory stream<br>

`signal()` : sets a signal handler for a specific signal<br>

`stat(_xstat)` : gets file status information for a file<br>

`lstat(_lxstat)` : gets file status information for a symbolic link<br>

`fstat(_fxstat)` : gets file status information for an open file descriptor<br>

`strtok()` : splits a string into tokens<br>

`wait()` : waits for a child process to terminate and returns its exit status<br>

`waitpid()` : waits for a specific child process to terminate and returns its exit status<br>

`wait3()` : waits for a child process to terminate and provides more detailed information about its resource usage<br>

`wait4()` : waits for a specific child process to terminate and provides more detailed information about its resource usage<br>

`write()` : writes data to a file descriptor or a stream.<br>

## The three `main()` prototypes:

1. **int main(void)** This is the traditional and most commonly used prototype of `main()`. It does not accept any arguments and returns an integer value to that indicats an exit status of the program.

2. **int main(int argc, char *argv[])** This prototype is used when CLI arguments are passed to the program. `argc` is an integer that represents the number of arguments passed to the program, and `argv` is an array of strings that contains the arguments themselves.

3. **int main(int argc, char *argv[], char *envp[])** This prototype is used when the program needs to access environment variables. `envp` is an array of strings that contains the environment variables and their values. In a separate function, we can use 'putenv()' function to add a new environment variable. We can use `getenv()` function to retrieve the value of the new environment variable and print it to console.

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *new_env_var;

    new_env_var = "MY_VAR=hello";
    putenv(new_env_var);
    printf("MY_VAR is %s\n", getenv("MY_VAR"));
    return (0);
}
```
`Output:  MY_VAR is hello`


