*This project has been created as part of the 42 curriculum by [abayram]*

## Description
**Libft** is the introductory project of the 42 curriculum. Its primary goal is to recreate a library of standard C functions from scratch. By re-implementing these functions, I have gained a deep understanding of memory management, data structures, and the inner workings of the C standard library. 

This project serves as a personal utility library (`libft.a`) that will be used as a foundation for almost all subsequent C projects in the 42 school, such as *get_next_line*, *ft_printf*, and *minishell*.

## Instructions

### Compilation
The project is managed by a `Makefile` that complies with 42's strict standards. You can use the following commands in the terminal:

* **`make`**: Compiles the mandatory functions and generates the `libft.a` static library.
* **`make bonus`**: Compiles both mandatory and linked list (bonus) functions.
* **`make clean`**: Removes the object files (`.o`) generated during compilation.
* **`make fclean`**: Removes object files and the `libft.a` file.
* **`make re`**: Performs a full clean and re-compiles the entire project.

### Execution
To use this library in your own project, include the header file and link the static library:

1.  Include the header: `#include "libft.h"`
2.  Compile your project with the library:
    ```bash
    cc main.c -L. -lft -o my_program
    ```

## Library Description
The library is composed of the following sections:

1.  **Standard Libc:** Clones of standard functions like `ft_strlen`, `ft_atoi`, `ft_strdup`, and `ft_memcpy`.
2.  **Additional Functions:** Useful utilities that are not part of the standard C library, such as `ft_split`, `ft_strjoin`, `ft_substr`, and `ft_itoa`.
3.  **File Descriptor Functions:** Utilities to output characters, strings, and numbers to a specific file descriptor (`ft_putchar_fd`, `ft_putnbr_fd`, etc.).
4.  **Linked List (Bonus):** A set of functions to manipulate a `t_list` structure, enabling dynamic data storage.



## Resources
* [Linux Manual Pages (man7.org)](https://man7.org/linux/man-pages/): Used as the primary reference for function behavior.
* [42 Norminette Documentation](https://github.com/42School/norminette): Used to ensure all code complies with the 42 coding style.

### AI Usage Disclosure
Artificial Intelligence (Gemini 3 Flash) was utilized for the following tasks:
* **Code Review:** Identifying and resolving type-matching errors (signed vs. unsigned) in `ft_strncmp`.
* **Logical Refinement:** Optimizing the recursive logic for `ft_putnbr_fd` and complex pointer manipulations in `ft_lstmap`.
* **Infrastructure:** Assisting in the creation of a robust `Makefile` that supports bonus rules without "relinking".
* **Documentation:** Generating the content and structure of this `README.md` to meet the specific documentation requirements of the 42 curriculum.