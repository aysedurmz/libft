*This project has been created as part of the 42 curriculum by aysdurma.*


## Description
This project aims to recreate a personal C library libft, as defined in the 42 curriculum. The primary goal is to reimplement standard C library functions to gain a deep understanding of their internal mechanisms, memory management, and low-level data manipulation. The library is written in accordance with the 42 Norm and covers the following components:


## Instructions
The project uses a Makefile for compilation. The following commands are available:

* **Compilation:**
    Run `make` to compile the source files and generate the `libft.a` static library.
* **Cleaning:**
    Run `make clean` to remove object files (`.o`).
    Run `make fclean` to remove both object files and the `libft.a` file.
* **Recompilation:**
    Run `make re` to clean and recompile the project from scratch.
* **Usage:**
    To use this library in your code, include the header file : #include "libft.h"


## Resources
The following resources were referenced during the development of this project:

* **Man Pages:** consult standard manual pages (e.g., `man malloc`, `man string`) to understand the strict behavior, return values, and parameters of the original libc functions.

**AI Usage:**
Artificial Intelligence tools were used in this project for the following specific tasks:
* **Debugging:** Assisting in identifying the cause of segmentation faults and memory leaks (e.g., analyzing `ft_calloc` overflow issues).
* **Documentation:** helping to structure and format for Makefile and README file according to the subject requirements.


### Library Contents

**String** : `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_strdup`, `ft_strjoin`, `ft_strtrim`, `ft_split`,`ft_strmapi`, `ft_striteri`

**Memory** : `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

**Character** : `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

**Conversion** : `ft_atoi`, `ft_itoa`

**Output** : `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Linked List** : `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`