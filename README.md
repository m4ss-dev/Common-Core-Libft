*This activity has been created as part of the 42 curriculum by ydames.*

# Libft - Your Very First Own Library

## Description

**Libft** is the foundational C programming project of the 42 curriculum. Since standard C library functions are not permitted by default in most subsequent projects, the goal of this activity is to re-implement a comprehensive set of essential `libc` functions, alongside additional utility functions for string manipulation, file descriptor output, and linked list management.

The resulting static library (`libft.a`) serves as a personal toolkit that will be reused and expanded throughout future C projects. All functions are written in C in strict compliance with the **42 Norm** and compiled without memory leaks or undefined behaviors.

---

## Library Overview

The library is divided into three main parts:

### Part 1 - Libc Functions
Re-implementations of standard C library functions with the exact same prototypes and behaviors as the originals (prefixed with `ft_`):
- **Character checks and conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_atoi`
- **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Dynamic memory allocation:** `ft_calloc`, `ft_strdup`

### Part 2 - Additional Functions
Utility functions either absent from the standard `libc` or implemented in a different form:
- **String creation and transformation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 - Linked Lists
Functions designed to create, traverse, and manipulate singly linked lists using the `t_list` structure (`content` and `next` pointers):
- **Node creation and insertion:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- **List inspection:** `ft_lstsize`, `ft_lstlast`
- **Deletion and iteration:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## Instructions

### Compilation
The project includes a `Makefile` supporting standard 42 rules (`all`, `clean`, `fclean`, `re`) and compiles with `cc` using the `-Wall -Wextra -Werror` flags.

To compile the `libft.a` static library at the root of the repository:
```bash
git clone https://github.com/m4ss-dev/Common-Core---Libft-dd69b518-c470-4dda-8722-53db7e041016.git
cd Common-Core---Libft-dd69b518-c470-4dda-8722-53db7e041016
make
```

To remove object files (`.o`):
```bash
make clean
```

To remove both object files and the compiled library (`libft.a`):
```bash
make fclean
```

To recompile the entire library from scratch:
```bash
make re
```

### Usage
Include `"libft.h"` in your C source files and link `libft.a` during compilation:
```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello from libft!", 1);
    return (0);
}
```
```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

---

## Resources

### Technical References
- **Linux / BSD Manual Pages (`man`):** Official documentation covering standard `libc` behaviors, edge cases, and prototypes (`man 3 strlen`, `man 3 calloc`, `man 3 strlcat`, etc.).
- **The C Programming Language (K&R):** Reference book on pointers, memory management, and standard library design.
- **42 Norm Documentation:** Official coding style and structure guidelines enforced by `norminette`.

### AI Usage
In accordance with 42's AI guidelines, AI tools were strictly used as an **educational tutor** (without generating ready-to-use code):
- **Debugging and Edge Cases:** Analyzing compiler warnings, Norminette errors, and memory edge cases (such as checking for `SIZE_MAX` overflow in `ft_calloc` or `unsigned char` comparisons in `ft_strncmp`).
- **Algorithmic Guidance:** Step-by-step breakdown of algorithms (such as `ft_atoi` and memory allocation strategies) through guided questions rather than direct answers.
- **Documentation:** Structuring, formatting, and translating this `README.md` file to comply with the project requirements.