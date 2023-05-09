# This is a Manual for `ELF` files

`ELF`
E - Executable
L - Linkable
F - Format

- These files formats are for binary files.
	°executable files (commnads in Linux e.g `ls`, `cd`, `pwd`)
- They are the end resut of Linux OS compilation and linking.

## 4 Types of `ELF` files
	°Executable - standard exeutable binary file<br>
	°Shared object files - dynamic, shared libraries( e.g C library)<br>
	°Relocatable file - non executable, to be placed in an executable or shared object file<br>
	 compliled but not linked (e.g hello.o)<br>
	°Core dump files - the recorded state of the working memory of a computer program at a specific time<br>
     	 generally when the program has crashed or otherwise terminated abnormally.<br>
	 consists of memory addresses, dump register values and the call stack at point of crash.<br>

## `ELF` Basic structure

### File Header (ELF Header)
- 32 bytes long, and identifies the format of the file.
- It starts with a sequence of four unique bytes that are 0x7F followed by 0x45, 0x4c, and 0x46 which translates into the three letters E, L, and F. 
- Among other values, the header also indicates whether it is an ELF file for 32 or 64-bit format, uses little or big endianness.
- It can display, among many others, the following values; Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address.

### Sections

### Segments

### Section headers

### Program(segment) headers
