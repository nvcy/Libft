This project has been created as part of the 42 curriculum by nvcy.

Libft — Your Very First Own Library

Description

Libft is a foundational C programming project in the 42 curriculum. Its objective is to create a personal C library containing reimplementations of standard C library functions, additional string and output utilities, and linked-list manipulation functions.

The project provides an opportunity to understand how fundamental functions work internally, develop memory-management skills, and build reusable tools for future C projects.

The library is compiled into a static archive named "libft.a", which can be linked to other C programs.

Project requirements: Libft subject, version 19.3.

Objectives

- Understand pointers, arrays, strings, and memory addresses.
- Implement low-level memory manipulation functions.
- Understand dynamic memory allocation and deallocation.
- Reimplement standard C library functions.
- Work with function pointers and callbacks.
- Implement and manipulate singly linked lists.
- Learn static library creation and linking.
- Develop reliable code that follows the 42 Norm.

Instructions

Requirements

- A C compiler ("cc").
- "make".
- "ar", for creating the static library.
- Norminette, for checking compliance with the 42 Norm.

Compilation

Clone the repository and navigate to its root directory.

git clone https://github.com/nvcy/libft.git
cd libft
make

The build produces:

libft.a

The Makefile must use "cc" with "-Wall -Wextra -Werror", create the archive with "ar", and avoid unnecessary relinking.

Makefile rules

Rule| Description
"make"| Builds "libft.a".
"make all"| Builds the library.
"make clean"| Removes object files.
"make fclean"| Removes object files and "libft.a".
"make re"| Rebuilds the library.

Using Libft in another program

Include the header:

#include "libft.h"

Compile and link a test program:

cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test

The "-L." option searches the current directory for libraries, and "-lft" links against "libft.a".

Library Contents

The library contains 43 mandatory functions, organized into three parts according to the subject.

Part| Contents| Functions
Part 1| Libc reimplementations| 23
Part 2| Additional functions| 11
Part 3| Linked-list functions| 9
Total| Complete mandatory library| 43

There is no separate optional bonus part in this subject version: the linked-list functions in Part 3 are mandatory.

---

Part 1 — Libc Functions

The first part consists of reimplementing standard library functions. Their names use the "ft_" prefix, and their behavior must follow the relevant manual-page specifications and the subject's requirements.

The implementations must not rely on external functions, except where explicitly permitted by the subject.

1. Character classification

Function| Prototype| Description
"ft_isalpha"| "int ft_isalpha(int c);"| Tests whether a character is an alphabetic letter.
"ft_isdigit"| "int ft_isdigit(int c);"| Tests whether a character is a decimal digit.
"ft_isalnum"| "int ft_isalnum(int c);"| Tests whether a character is alphabetic or numeric.
"ft_isascii"| "int ft_isascii(int c);"| Tests whether a value belongs to the ASCII range.
"ft_isprint"| "int ft_isprint(int c);"| Tests whether a character is printable.

For these five functions, the subject requires a return value of "1" when the character matches the tested class and "0" otherwise.

2. String length and memory manipulation

Function| Prototype| Description
"ft_strlen"| "size_t ft_strlen(const char *s);"| Calculates the length of a string, excluding its terminating null character.
"ft_memset"| "void *ft_memset(void *s, int c, size_t n);"| Fills a memory area with a specified byte value.
"ft_bzero"| "void ft_bzero(void *s, size_t n);"| Sets a specified number of bytes to zero.
"ft_memcpy"| "void *ft_memcpy(void *dst, const void *src, size_t n);"| Copies bytes between non-overlapping memory regions.
"ft_memmove"| "void *ft_memmove(void *dst, const void *src, size_t n);"| Copies bytes while allowing overlapping memory regions.
"ft_memchr"| "void *ft_memchr(const void *s, int c, size_t n);"| Searches a memory region for a specified byte.
"ft_memcmp"| "int ft_memcmp(const void *s1, const void *s2, size_t n);"| Compares two memory regions byte by byte.

3. String copying and concatenation

Function| Prototype| Description
"ft_strlcpy"| "size_t ft_strlcpy(char *dst, const char *src, size_t size);"| Copies a string into a size-limited destination buffer.
"ft_strlcat"| "size_t ft_strlcat(char *dst, const char *src, size_t size);"| Appends a string within the destination buffer's size limit.
"ft_strdup"| "char *ft_strdup(const char *s);"| Allocates and returns a duplicate of a string.

4. String searching and comparison

Function| Prototype| Description
"ft_strchr"| "char *ft_strchr(const char *s, int c);"| Locates the first occurrence of a character in a string.
"ft_strrchr"| "char *ft_strrchr(const char *s, int c);"| Locates the last occurrence of a character in a string.
"ft_strncmp"| "int ft_strncmp(const char *s1, const char *s2, size_t n);"| Compares up to a specified number of characters.
"ft_strnstr"| "char *ft_strnstr(const char *haystack, const char *needle, size_t len);"| Searches for a substring within a bounded portion of another string.

5. Character conversion

Function| Prototype| Description
"ft_toupper"| "int ft_toupper(int c);"| Converts a lowercase letter to uppercase.
"ft_tolower"| "int ft_tolower(int c);"| Converts an uppercase letter to lowercase.

6. Numeric conversion and allocation

Function| Prototype| Description
"ft_atoi"| "int ft_atoi(const char *nptr);"| Converts the initial numeric portion of a string to an integer.
"ft_calloc"| "void *ft_calloc(size_t nmemb, size_t size);"| Allocates memory for an array and initializes its bytes to zero.

"ft_calloc" and "ft_strdup" must use "malloc" as specified by the subject.

For "ft_calloc", the subject explicitly requires a unique pointer value that can be passed to "free()" when either "nmemb" or "size" is zero.

---

Part 2 — Additional Functions

These functions extend the library with useful string-processing operations, function-pointer utilities, and file-descriptor output functions.

1. String manipulation

Function| Prototype| Description
"ft_substr"| "char *ft_substr(char const *s, unsigned int start, size_t len);"| Allocates and returns a substring beginning at a specified index.
"ft_strjoin"| "char *ft_strjoin(char const *s1, char const *s2);"| Allocates a string formed by concatenating two strings.
"ft_strtrim"| "char *ft_strtrim(char const *s1, char const *set);"| Removes characters belonging to a specified set from both ends of a string.
"ft_split"| "char **ft_split(char const *s, char c);"| Splits a string into independently allocated strings using a delimiter.
"ft_itoa"| "char *ft_itoa(int n);"| Converts an integer into a newly allocated decimal string.

2. Function pointers and iteration

Function| Prototype| Description
"ft_strmapi"| "char *ft_strmapi(char const *s, char (*f)(unsigned int, char));"| Applies a function to each character and its index, returning a newly allocated string.
"ft_striteri"| "void ft_striteri(char *s, void (*f)(unsigned int, char *));"| Applies a function to each character by passing its index and address, allowing modification of the original string.

3. File-descriptor output

Function| Prototype| Description
"ft_putchar_fd"| "void ft_putchar_fd(char c, int fd);"| Writes one character to a specified file descriptor.
"ft_putstr_fd"| "void ft_putstr_fd(char *s, int fd);"| Writes a string to a specified file descriptor.
"ft_putendl_fd"| "void ft_putendl_fd(char *s, int fd);"| Writes a string followed by a newline.
"ft_putnbr_fd"| "void ft_putnbr_fd(int n, int fd);"| Writes an integer in decimal notation.

The additional functions that allocate memory return "NULL" if allocation fails, as specified by the subject.

"ft_split" returns a dynamically allocated, "NULL"-terminated array of strings. Each string and the array itself must be released with "free()".

---

Part 3 — Linked Lists

The third part introduces singly linked lists and requires nine functions.

Data structure

The following structure must be declared in "libft.h":

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

- "content" stores the address of the node's data.
- "next" points to the following node.
- The last node has "next == NULL".
- An empty list is represented by a "NULL" head pointer.

Linked-list functions

Function| Prototype| Description
"ft_lstnew"| "t_list *ft_lstnew(void *content);"| Allocates a node, stores its content, and initializes "next" to "NULL".
"ft_lstadd_front"| "void ft_lstadd_front(t_list **lst, t_list *new);"| Adds a node to the beginning of the list.
"ft_lstsize"| "unsigned int ft_lstsize(t_list *lst);"| Counts the nodes in a list.
"ft_lstlast"| "t_list *ft_lstlast(t_list *lst);"| Returns the last node of a list.
"ft_lstadd_back"| "void ft_lstadd_back(t_list **lst, t_list *new);"| Adds a node to the end of the list.
"ft_lstdelone"| "void ft_lstdelone(t_list *lst, void (*del)(void *));"| Deletes one node, using a callback to free its content.
"ft_lstclear"| "void ft_lstclear(t_list **lst, void (*del)(void *));"| Deletes a list and its successors, then sets the head pointer to "NULL".
"ft_lstiter"| "void ft_lstiter(t_list *lst, void (*f)(void *));"| Applies a function to the content of every node.
"ft_lstmap"| "t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));"| Creates a new list by applying a function to each node's content.

Memory ownership

The linked-list functions require careful handling of memory ownership.

- "ft_lstnew" allocates the node but does not automatically duplicate its content.
- "ft_lstdelone" deletes one node without deleting its successor.
- "ft_lstclear" deletes the nodes and resets the list head.
- "ft_lstmap" must clean up the partially constructed new list if allocation fails, using the supplied deletion callback where required.

---

Technical Requirements

The project must follow the requirements of the Libft subject, version 19.3.

- All files must be placed at the root of the repository.
- Unused files must not be submitted.
- Global variables are forbidden.
- Helper functions should be declared "static" when their scope should be restricted to one source file.
- Every ".c" file must compile with "-Wall -Wextra -Werror".
- The compiler must be "cc".
- The static library must be created using "ar"; "libtool" is forbidden.
- "libft.a" must be created at the repository root.
- The Makefile must contain "$(NAME)", "all", "clean", "fclean", and "re".
- The Makefile must not perform unnecessary relinking.
- All allocated memory must be freed when necessary.
- Functions must not crash except when their behavior is undefined by the relevant specifications.

The subject also specifies that "restrict" must not be included in the reimplemented function prototypes and that the project must not be compiled using "-std=c99".

Testing

Testing is recommended to verify function behavior and memory safety.

Compilation and Norminette

make
norminette
make re

Test program

cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test

Memory checks

Where Valgrind is available:

valgrind --leak-check=full ./test

Tests should cover ordinary inputs, empty strings, zero-length operations, boundary conditions, allocation failures where testable, overlapping memory regions, and empty or single-node linked lists.

Resources

- "42 School" (https://42.fr/) — information about the 42 curriculum.
- "Linux man-pages" (https://man7.org/linux/man-pages/) — reference documentation for C library and system functions.
- "The Open Group Base Specifications" (https://pubs.opengroup.org/onlinepubs/9799919799/) — POSIX specifications.
- "GNU Make Manual" (https://www.gnu.org/software/make/manual/) — Makefile syntax and build rules.
- "GCC Documentation" (https://gcc.gnu.org/onlinedocs/) — compiler options and C language documentation.

AI usage

AI assistance was used to help organize this README and explain the purpose, interfaces, and requirements of the library functions.

The function implementations, their behavior, and compliance with the official subject must be checked and understood by the author. Any additional AI assistance used during implementation or testing should be described accurately.

Author

Abdelhamid Merghad

- GitHub: "@nvcy" (https://github.com/nvcy)

Project information

Item| Value
Project| Libft
Curriculum| 42
Language| C
Library| "libft.a"
Subject version| 19.3
Mandatory functions| 43
