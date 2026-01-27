*This project has been created as part of the 42 curriculum by aysdurma.*

## Description
This project aims to recreate a personal C library libft, as defined in the 42 curriculum. The primary goal is to reimplement standard C library functions to gain a deep understanding of their internal mechanisms, memory management, and low-level data manipulation. This library serves as a foundation for future projects at 42.

The library is written in accordance with the 42 Norm and covers the following components:

* **Libc Functions:** Reimplementations of standard C functions focusing on string manipulation (`ft_strlen`, `ft_strlcpy`), memory operations (`ft_memset`, `ft_calloc`), and character checks (`ft_isalnum`).
* **Additional Utility Functions:** Useful functions not present in the standard libc but essential for C programming, such as string splitting (`ft_split`) and integer conversion (`ft_itoa`).
* **File Descriptor Output Functions:** Utilities to write characters, strings, and numbers to specific file descriptors (`ft_putstr_fd`, `ft_putnbr_fd`).
* **Linked List Functions:** A set of bonus functions to manipulate singly linked lists, enabling creation, addition, deletion, and iteration of list nodes.

## Instructions
The project uses a Makefile for compilation. The following commands are available:

* **Compilation:**
    Run `make` to compile the source files and generate the `libft.a` static library.
    ```bash
    make
    ```

* **Cleaning:**
    Run `make clean` to remove object files (`.o`).
    Run `make fclean` to remove both object files and the `libft.a` file.

* **Recompilation:**
    Run `make re` to clean and recompile the project from scratch.

* **Usage:**
    To use this library in your code, include the header file and link the library during compilation:
    ```c
    #include "libft.h"
    ```
    ```bash
    gcc main.c -L. -lft -o my_program
    ```

## Resources
The following resources were referenced during the development of this project:

* **Man Pages:** consult standard manual pages (e.g., `man malloc`, `man string`) to understand the strict behavior, return values, and parameters of the original libc functions.
* **GNU Libc Documentation:** Used to verify edge cases and standard specifications.

**AI Usage:**
Artificial Intelligence tools were used in this project for the following specific tasks:
* **Debugging:** Assisting in identifying the cause of segmentation faults and memory leaks (e.g., analyzing `ft_calloc` overflow issues).
* **Verification:** Reviewing logic for edge cases in complex functions.
* **Documentation:** helping to structure and format this README file according to the subject requirements.