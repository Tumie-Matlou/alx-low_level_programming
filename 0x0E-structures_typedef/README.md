# Structures Directory

- Structures provide a way to unify several variables of different datatypes into a single, new variable type which can be assigned its own type name.
- `structs` group together elements of a variety of data types that have a logical connection.
- below is a typical example of a struct for student information, consisting their name, id and grades.

```C
struct student {
  char *name;
  int id;
  float grades;
  };
  ```
  
  - usually, `Structs` are defined at the top of the c file itself or a header file (highly recommended).
  - to access the members of a `struct`(name, id and grades), we use a dot operator (.).
  
  ```C
  /*variable declaration*/
  struct student student1;
  
  /*member accessing*/
  strcpy(student1.name = "James Bond")/*you need to copy or duplicate the string first*/
  student1.id =  007;
  student1.grades = 96.98;
  ```
  
  - we dont need to place `structs` on the stack.
  - we can dynamically allocate some memory for them at run time if our program requires it.
  - if we do allocate some memory dynamically, we would have to dereference the pointer to the struct when accessing the members.

```C
struct student *student1 = malloc(`sizeof`(`struct`student);
strcpy(student1->name = "James Bond");
student1->id =  007;
student1->grades = 96.98;
  ```
  
  Alternatively,
  
  ```C
  struct student *student1 = malloc(`sizeof`(`struct`student);
  
  strcpy((*student1.name) = "James Bond");
  (*student1.id) =  007;
  (*student1.grades) = 96.98;
  ```
  -we can use `typedef` to reduce the tedious activity of coding '`struct` student' every time we refer to our struct.
  
  ```C
  typedef struct student student;
  ```
  
  Alternativlely,
  
  ```C
  typedef struct student {
  char *name;
  int id;
  float grades;
  } student;
  ```
  
  - now we can declare a struct variable this way:
  
  ```C
  student student1;
  ```
  # Tasks
  
  0. **Poppy** - define a new type struct dog
  1. **A dog is the only thing on earth that loves you more than you love yourself** - a function that initialize a variable of type struct dog
  2. **A dog will teach you unconditional love** - a function that prints a struct dog
  3. **Outside of a dog, a book is a man's best friend.** - Define a new type dog_t as a new name for the type struct dog.
  4. **A door is what a dog is perpetually on the wrong side of** - a function that creates a new dog.
  5. **How many legs does a dog have if you call his tail a leg?** -  a function that frees dogs.
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
