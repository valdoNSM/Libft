*This project has been created as part of the 42 curriculum by naikhoua.*

# Libft

## Description

Libft is the first library project in the 42 curriculum.

The goal of this project is to create a personal C library by reimplementing standard C library functions and developing additional utility functions.

This project helps develop a deeper understanding of C programming, pointers, memory management, strings, dynamic allocation, and linked lists.

The final library is named `libft.a` and can be reused in future C projects.

# Library Functions

## Part 1 — Libc Functions

This part consists of reimplementing standard C library functions.

### 1. Character Classification Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter (uppercase or lowercase). |
| `ft_isdigit` | Checks whether a character is a decimal digit (0–9). |
| `ft_isalnum` | Checks whether a character is an alphabetic letter or a digit. |
| `ft_isascii` | Checks whether a character belongs to the ASCII range (0–127). |
| `ft_isprint` | Checks whether a character is printable, including the space character. |

These functions return `1` if the condition is true and `0` otherwise.

### 2. String Functions

| Function | Description |
|---|---|
| `ft_strlen` | Calculates and returns the length of a string, excluding the null terminator. |
| `ft_strlcpy` | Copies a string into a destination buffer while respecting its size and ensuring null termination when the destination size is greater than zero. |
| `ft_strlcat` | Appends a string to the end of another string while respecting the destination buffer size. |
| `ft_toupper` | Converts a lowercase alphabetic character into uppercase. |
| `ft_tolower` | Converts an uppercase alphabetic character into lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a string, limited to a specified number of characters. |
| `ft_atoi` | Converts the initial portion of a string into an integer. |

### 3. Memory Functions

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specified byte value. |
| `ft_bzero` | Sets a specified number of bytes in a memory area to zero. |
| `ft_memcpy` | Copies a specified number of bytes from one memory area to another. The memory areas must not overlap. |
| `ft_memmove` | Copies bytes between memory areas, including when the source and destination overlap. |
| `ft_memchr` | Searches for the first occurrence of a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |

### 4. Dynamic Memory Allocation Functions

| Function | Description |
|---|---|
| `ft_calloc` | Allocates memory for a specified number of elements and initializes all allocated bytes to zero. |
| `ft_strdup` | Allocates memory and creates a duplicate of an existing string. |

## Part 2 — Additional Functions

This part introduces additional functions for string manipulation, memory allocation, and output.

### 1. String Manipulation

| Function | Description |
|---|---|
| `ft_substr` | Creates a new substring from a given string, starting at a specified index and with a maximum length. |
| `ft_strjoin` | Allocates and returns a new string containing the concatenation of two strings. |
| `ft_strtrim` | Creates a copy of a string after removing specified characters from its beginning and end. |
| `ft_split` | Splits a string into an array of strings using a specified delimiter character. |
| `ft_itoa` | Converts an integer into its string representation, including negative numbers. |
| `ft_strmapi` | Creates a new string by applying a function to each character, passing its index and character as arguments. |
| `ft_striteri` | Applies a function to each character of a string, passing its index and the character's address, allowing modification. |

### 2. File Descriptor Output Functions

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a single character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

## Part 3 — Linked List (Bonus)

The bonus part introduces linked lists, which are dynamic data structures made of connected nodes.

Each node uses the following structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

- `content`: Stores the data contained in the node.
- `next`: Stores the address of the next node, or `NULL` if it is the last node.

### Linked List Functions

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and creates a new node, initializes its content with the given value, and sets its next pointer to `NULL`. |
| `ft_lstadd_front` | Adds a new node at the beginning of a linked list. |
| `ft_lstsize` | Counts and returns the total number of nodes in a linked list. |
| `ft_lstlast` | Returns a pointer to the last node of a linked list. |
| `ft_lstadd_back` | Adds a new node at the end of a linked list. |
| `ft_lstdelone` | Deletes one node by freeing its content using a specified deletion function, then frees the node itself without deleting the next node. |
| `ft_lstclear` | Deletes a node and all following nodes, frees their contents and nodes, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Iterates through a linked list and applies a function to the content of each node. |
| `ft_lstmap` | Creates a new linked list by applying a function to each node's content, using a deletion function if an allocation fails. |

# Technical Considerations

- Programming language: C.
- Compiler: `cc`.
- Compilation flags: `-Wall -Wextra -Werror`.
- Library format: Static library (`libft.a`).
- Archive creation: `ar`.
- No global variables are allowed.
- All dynamically allocated memory must be properly freed.
- The project must follow the 42 Norm.
- All source files are located at the root of the repository.

# Instructions

## Compilation

To compile the library:

```bash
make
```

This generates:

```bash
libft.a
```

## Makefile Rules

| Rule | Description |
|---|---|
| `make` | Compiles the library. |
| `make all` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and the library. |
| `make re` | Removes previous compilation files and rebuilds the library. |
| `make bonus` | Compiles the bonus functions, if implemented. |

## Using Libft in Another Project

Include the header:

```c
#include "libft.h"
```

Compile your project with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the program:

```bash
./program
```

# Resources

The following resources are useful for understanding and implementing the project:

- Linux Manual Pages (`man`).
- C programming documentation.
- `man 3 strlen`
- `man 3 memset`
- `man 3 malloc`
- `man 3 free`
- `man 2 write`
- 42 / 1337 project documentation.

## AI Usage

AI tools were used as learning support during the project.

They helped with:
- Understanding C programming concepts.
- Explaining function prototypes and return types.
- Understanding pointers and memory management.
- Interpreting compiler errors.
- Understanding the behavior of standard C functions.
- Reviewing concepts and preparing test cases.

AI was used as a learning assistant to support understanding and problem-solving, rather than as a replacement for independent implementation.

# Author

**Login:** naikhoua

**School:** 42 / 1337