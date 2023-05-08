# File Operations Directory

- This directory explores regular file Input/Output operations, it illustrates file handling in C.

- We deal with two types of files in our system:<br>
  ° `Text files` - the contents within the file as plain text. You can easily edit or delete the contents. They take minimum effort
    to maintain, are easily readable, and provide the least security and takes bigger storage space. **(.txt)**<br>
    
  ° `Binary files`- Instead of storing data in plain text, they store it in the binary form (0's and 1's). They can hold a higher
    amount of data, are not readable easily, and provides better security than text files. 
    **(.bin)**<br>
    
## File descriptors
- Non-negative integer values of the POSIX API.
- The program usually has predetrmined file descriptors that run immediately as the program runs.
- `STDIN_FILENO` - symbolic constant of value `0`, stdin in stdlib stream.
- `STDOUT_FILENO`- symbolic constant of value `1`, stdout in stdlib stream.
- `STDERR_FILENO`- symbolic constant of value `2`, stderr in stdlib stream.
- When more files are opened, the start at value `3`onward.

![image](https://user-images.githubusercontent.com/123845948/231463285-715cf7ec-72d9-4efb-aefc-7e205d48c029.png)

## The common functions in file I/O are `open`, `write`, `read`, `close`.

### `open()`
- This functions opens a file using `fopen()` or `open()` in the `<stdlib.h>` or `<fcntl.h>`, respectively.
```c
int *fptr = fopen("filename", "access_mode");
int fd = open("filename", "access_mode");
```
**fd**<br>
- The file descriptor returned by the `open()`function.
- `open()` returns `-1` if the file cannot be opened, or when the program encounters an error whille trying to open the file, e.g access or permission denied.
```c
if (fd == -1)
{
    perror("Cannot Open File");
    exit(1);
}
 ```
**fptr**<br>
- Is the file pointer returned by the `fopen()`.
- It points to the file's file descriptor.

**access_mode**<br>
- It is the access or permission specified regarding the file for the admin, group, and user.

_Possible Modes:_<br>
"r" / O_RDONLY -	Open for reading.	If the file does not exist, fopen() returns NULL.<br>
"rb" - Open for reading in binary mode.	If the file does not exist, fopen() returns NULL.<br>
"w" / O_WRONLY -	Open for writing.	If the file exists, its contents are overwritten. If the file does not exist, it will be created.<br>
"wb" -	Open for writing in binary mode.	If the file exists, its contents are overwritten. If the file does not exist, it will be created.<br>
"a" - Open for append. Data is added to the end of the file.	If the file does not exist, it will be created.<br>
"ab" - Open for append in binary mode. Data is added to the end of the file.	If the file does not exist, it will be created.<br>
"r+" / O_RDWR - Open for both reading and writing.	If the file does not exist, fopen() returns NULL.<br>
"rb+"	- Open for both reading and writing in binary mode.	If the file does not exist, fopen() returns NULL.<br>
"w+" / O_RDWR -	Open for both reading and writing.	If the file exists, its contents are overwritten. If the file does not exist, it will be created.<br>
"wb+" -	Open for both reading and writing in binary mode.	If the file exists, its contents are overwritten. If the file does not exist, it will be created.<br>
"a+" - Open for both reading and appending.	If the file does not exist, it will be created.<br>
"ab+" - Open for both reading and appending in binary mode.	If the file does not exist, it will be created.<br>
O_CREAT - Specifies that the file should be created if it does not already exist.<br>
O_APPEND - Specifies that data should be written to the end of the file instead of overwriting existing data.<br>
O_TRUNC - Specifies that if the file already exists, it should be truncated.<br>
O_EXCL - Specifies that the open should fail if the file already exists.<br>

```c
int fd = open("example.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
/* | is not the pipe character, it is the OR bitwise operator*/
/*0644 is the permission of the file in octal form*/
```
### `close()`
- This function closes an open file using `fclose()` or `close()` in the `stdlib.h` or the `<fcntl.h>.
```c
fclose(fptr);
close(fd);
```
### `read()`
- This function reads data from a file into a buffer in memory, starting at the current file position.
- It is founf in the `<unistd.h>` library

```c
ssize_t bytes_read;

/* syntax - read(int fd, const void *buf, size_t count)*/

bytes_read = read(fd, buffer, bytes_intended_to_read);
/*fd is the file descriptor value from the open() function*/
/*buffer is a pointer to a buffer in memory where the data read from the file will be stored.*/ 
/*The buffer must be large enough to hold the data being read.*/
/* bytes_intended_to_read is the size of the buffer in bytes.*/
/*It specifies the maximum amount of data that can be read from the file into the buffer.*/
/*The actual amount of data read may be less than the size of the buffer*/
```
- It returns the number of bytes read, or -1 if an error occurs.

```c
if (bytes_read == -1)
{
    perror("Cannot Read File");
    close(fd);
    exit(1);
 }
 
 write(STDOUT_FILENO, buffer, bytes_read);
 
 close(fd);
 return (bytes_read)
 ```
 ### `write()`
 - This function reads from the buffer in memory and writes the bytes read out into the standar output.
 - It can be found intthe `<unistd.h>` library.

```c
ssize_t bytes_written;

/*syntax - write(int fd, const void *buf, size_t count)*/

bytes_witten = write(fd, buffer, bytes_intended_to_write);
/*fd is the file descriptor value from the open() function*/
/*buffer is a pointer to a buffer in memory where the data written will be stored.*/ 
/*The buffer must be large enough to hold the data being written.*/
/* bytes_intended_to_write is the size of the buffer in bytes.*/
/*It specifies the maximum amount of data to write from the file into the buffer.*/
/*The actual amount of data written may be less than the size of the buffer*/
```
- It writes the data or returns -1 when it encounters an error.
```c
char buffer[1024];
size_t len = strlen(str);
ssize_t bytes_written 

bytes_written = write(fd, buffer, len);
if (bytes_written == -1)
{
    perror("write");
    close(fd);
    return 1;
}
    
close(fd);
return 0;
```
## Tasks

0. **Tread lightly, she is near** -  a function that reads a text file and prints it to the POSIX standard output.
1. **Under the snow** -  a function that creates a file.
2. **Speak gently, she can hear** - a function that appends text at the end of a file.
3. **cp** - a program that copies the content of a file to another file.

## Sources
- https://en.wikipedia.org/wiki/File_descriptor
- https://www.programiz.com/c-programming/c-file-input-output
