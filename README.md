📚 ***Libft — Your Very First Own Library***
Building the foundations of C, one function at a time.

This project was created as part of the ***42 curriculum by nvcy.***

*Libft* is a foundational C programming project focused on recreating essential functions from the standard C library, developing additional utility functions, and implementing singly linked lists.

The goal is to understand how these functions work internally, strengthen memory-management skills, and build a reusable library for future C projects.

The result is a static library named ***libft.a***, ready to be integrated into other C programs.

🎯 ***Objectives***
Master pointers, arrays, strings, and memory manipulation.
Understand dynamic memory allocation and deallocation.
Reimplement essential C standard library functions.
Develop string-processing and file-descriptor output utilities.
Work with function pointers and callbacks.
Implement and manage singly linked lists.
Learn static library compilation and linking.
Write clean, reliable code that follows the 42 Norm.
🛠️ Getting Started
### Requirements
cc — C compiler
make — Build automation
ar — Static library creation
norminette — 42 coding standard checker
### Installation

Clone the repository and build the library:

git clone https://github.com/nvcy/libft.git
cd *libft*
make


The compilation generates:

libft.a

Makefile Commands
Command	Description
make	Build the library
make all	Build the library
make clean	Remove object files
make fclean	Remove object files and libft.a
make re	Rebuild everything
Using Libft

Include the library header in your C source file:

#include "libft.h"


Compile and link your program:

cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test

📦 ****Library Contents****

Libft contains 43 mandatory functions, divided into three parts according to subject version 19.3.

Part	Description	Functions
Part 1	Standard C library reimplementations	23
Part 2	Additional utility functions	11
Part 3	Singly linked-list manipulation	9
Total	Complete mandatory library	43

All three parts are mandatory in this subject version.

🧩 *Part 1 — Libc Functions*

Reimplementing standard C functions helps develop a deeper understanding of how C handles characters, strings, memory, and numeric conversions.

Character Classification

ft_isalpha · ft_isdigit · ft_isalnum · ft_isascii · ft_isprint

String Length and Memory Manipulation

ft_strlen · ft_memset · ft_bzero · ft_memcpy · ft_memmove · ft_memchr · ft_memcmp

String Copying and Concatenation

ft_strlcpy · ft_strlcat · ft_strdup

String Searching and Comparison

ft_strchr · ft_strrchr · ft_strncmp · ft_strnstr

Character Conversion

ft_toupper · ft_tolower

Numeric Conversion and Allocation

ft_atoi · ft_calloc

These functions must respect the behavior and requirements specified by the official subject and the relevant function documentation.

✨ *Part 2 — Additional Functions*

This part expands the library with practical utilities for manipulating strings, applying callbacks, and writing output to file descriptors.

String Manipulation

ft_substr · ft_strjoin · ft_strtrim · ft_split · ft_itoa

Function Pointers and Iteration

ft_strmapi · ft_striteri

File-Descriptor Output

ft_putchar_fd · ft_putstr_fd · ft_putendl_fd · ft_putnbr_fd

Memory-allocating functions must handle allocation failures correctly. In particular, ft_split returns a dynamically allocated, NULL-terminated array whose strings and array must be freed when no longer needed.

🔗 *Part 3 — Linked Lists*

The final part introduces dynamic data structures through singly linked lists.

Data Structure

The t_list structure is defined in libft.h:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;


Each node stores a pointer to its content and a pointer to the next node. The last node points to NULL, while an empty list is represented by a NULL head pointer.

Required Functions
Function	Purpose
ft_lstnew	Create a new node
ft_lstadd_front	Add a node at the beginning
ft_lstsize	Count the nodes
ft_lstlast	Retrieve the last node
ft_lstadd_back	Add a node at the end
ft_lstdelone	Delete a single node
ft_lstclear	Delete an entire list
ft_lstiter	Apply a function to each node
ft_lstmap	Create a transformed copy of a list
Memory Management

Linked lists require careful handling of memory ownership:

ft_lstnew allocates a node without automatically duplicating its content.
ft_lstdelone deletes one node without deleting its successor.
ft_lstclear deletes the list and resets its head pointer to NULL.
ft_lstmap must safely clean up partially allocated lists if an allocation fails.
⚙️ Technical Requirements

The project must comply with the official Libft subject, version 19.3.

Compile using cc with -Wall -Wextra -Werror.
Create the static library using ar, not libtool.
Place the required files and libft.a at the repository root.
Include the required Makefile rules: all, clean, fclean, and re, with $(NAME) defined.
Avoid unnecessary relinking.
Do not use global variables.
Declare file-local helper functions as static when appropriate.
Free allocated memory correctly.
Follow the 42 Norm and the subject's function prototypes.
Do not include restrict in the reimplemented prototypes or compile using -std=c99.
🧪 Testing

Testing is essential for verifying correctness, edge cases, and memory safety.

Build and Check
make
norminette
make re

Run a Test Program
cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test

Check for Memory Leaks

If Valgrind is available:

valgrind --leak-check=full ./test


Recommended test cases:

Empty strings and NULL inputs where applicable.
Zero-length memory operations.
Boundary conditions and integer limits.
Overlapping memory regions.
Allocation failures where testable.
Empty, single-node, and multi-node linked lists.
Correct cleanup and absence of memory leaks.
📖 Resources
42 School — Curriculum and project information.
Linux man-pages — C library and system function documentation.
The Open Group Base Specifications — POSIX specifications.
GNU Make Manual — Build automation and Makefile rules.
GCC Documentation — Compiler options and C programming references.
🤖 AI Usage

AI assistance was used to organize this README and explain the purpose, interfaces, and requirements of the library functions.

The implementation, behavior, and compliance of every function must be verified and understood by the author. Any additional AI assistance used during implementation or testing should be disclosed accurately.

👤**Author**

**Abdelhamid Merghad**

****GitHub****: *@nvcy*
📋 Project Information
Item	Details
Project	Libft
Curriculum	42
Language	C
Output	libft.a
Subject Version	19.3
Mandatory Functions	43

Libft is more than a library — it's the foundation for everything that comes next in C.
