# Structures Directory

- sturctures provide a way to unify several variables of different datatypes into a single, new variacle type which can be assigned its own type name.
- `structs` group together elements of a variety of data types that have a logical connection.
- Below is a typical example of a struct of a student's information, such as their name, id and grades.

```
*`struct`student {
  `char` *name;
  `int` id;
  `float` grades;
  };*
  ```
  
  
  - usually, `Structs` are defined at the top of the c file itself or a header file (highly recommended).
  - to access the members of a `struct`(name, id and grades), we use a dot operator (.).
  
  ```
  _/\*variable declaration\*/
  `struct` student student1;
  /\*member accessing\*/
  strcpy(student1.name = "James Bond")/\*you need to copy or duplicate the string first\*/
  student1.id =  007;
  student1.grades = 96.98;_
  ```
  
  - we dont need to place 'structs' on the stack.
  - we can dynamically allocate spome memory for them at runt time if our program requires it.
  - if we do allocate them some memory dynamically, we would have to dereference the pointer to the struct when accessing the members.

```
_`struct` student *student1 = malloc(`sizeof`(`struct`student);_

_strcpy(student1->name = "James Bond")
  student1->id =  007;
  student1->grades = 96.98;_
  ```
  
  Alternatively,
  
  ```
  _strcpy((*student1.name) = "James Bond")
  (*student1.id) =  007;
  (*student1.grades) = 96.98;_
  ```
  -we can use `typedef`to reduce the tedious activity of coding '`struct` student' every time we refer to our struct.
  
  ```
  _`typedef` `struct` student student;_
  ```
  
  Alternativlely,
  
  ```
  *`typedef` `struct`student {
  `char` *name;
  `int` id;
  `float` grades;
  } student;*
  ```
  
  - now we can declare a struct variable this way:
  
  ```
  _student student1_;
  ```
  # Tasks
  
  0. **Poppy** - Define a new type struct dog
  1. **A dog is the only thing on earth that loves you more than you love yourself** - a function that initialize a variable of type struct dog
  2. **A dog will teach you unconditional love** - a function that prints a struct dog
  3. **Outside of a dog, a book is a man's best friend.** - Define a new type dog_t as a new name for the type struct dog.
  4. **A door is what a dog is perpetually on the wrong side of** - a function that creates a new dog.
  5. **How many legs does a dog have if you call his tail a leg?** -  a function that frees dogs.
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
