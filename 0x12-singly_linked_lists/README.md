# Singly Linked Lists Directory

- Singly linked lists are a form of synergy between dynamic memory allocation, `structs`, and pointers.
- They can further be recognised as a linear, dynamic data sturucture.

![WhatsApp Image 2023-04-02 at 16 41 17 (1)](https://user-images.githubusercontent.com/123845948/229366830-1d567699-9f5b-4e8f-be69-668e04f8d5cc.jpeg)


- They are a data structure that give us the ability to grow and shrink a collection of like values.
- There are a few different linked lists, however, this directory illustrtes the singly linked one.

- A linked list `node` has two members:<br>

    °**Data** - values we need for the program (of some datatype).<br>
    °**Pointer** - pointe to anothe `node` of same type.<br>

- A set of `nodes`canbe thought of as a chain of elements we can follow. 
- We use `structs` to create linked lists
_Example:_

```c
typedef struct sllist /*struct sllist is a temp name so we can refer to our struct*/
{
    any_datatype val;
    struct sllist *next; /*self referential structure/datatype*/
} sllnode; /*permanent name of struct*/
```

- Below is a visual representation of what a linked list would look like.

![linked lists drawio](https://user-images.githubusercontent.com/123845948/229366657-dff005c4-def4-4764-8a84-3856b23e2d0b.png)

- "Why not use arrays?", one would ask. Linked lists have perks that Arrays do not, especialy when wanting to insert or delete fractions of data. 
- See the table below by geeksforgeeks.org for differences.

|ARRAYS        | LINKED LISTS   |
|:------------:|:--------------:|
|Arrays are stored in contiguous location| Linked lists are not stored in contiguous location|
|Fixed in size. | Dynamc in size|
|Memory is allocated at compile time | Memory is allocated at run time|
|Uses less memory than linked lists | Uses more memory because it stores both data and the address of next node|
|Elements can be accessed easily| Element accessing requires the traversal of whole linked list|
|Insertion and deletion operation takes time| Insertion and deletion operation is faster|

# Tasks

0. **Print list** - a function that prints all the elements of a list_t list.
1. **List length** - a function that returns the number of elements in a linked list_t list.
2. **Add node** - a function that adds a new node at the beginning of a list_t list.
3. **Add node at the end** - a function that adds a new node at the end of a list_t list.
4. **Free list** - a function that frees a list_t list.
5. **The Hare and the Tortoise** - a function that prints a sentence
6. **Real programmers can write assembly code in any language** - a 64-bit program in assembly that prints Hello, Holberton, followed by a new line












