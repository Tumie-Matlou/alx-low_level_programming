# Structures Directory

- sturctures provide a way to unify several variables of different datatypes into a single, new variacle type which can be assigned its own type name.
- `structs` group together elements of a variety of data types that have a logical connection.
- Below is a typical example of a struct of a student's information, such as their name, id and grades.

*`struct`student {
  char *name;
  int id;
  float grades;
  };*
  
  - usually, `Structs` are defined at the top of the c file itself or a header file (highly recommended).
  - to access the members of a `struct`(name, id and grades), we use a dot operator (.).
  
  */\*variable declaration\*/
  `struct` student
