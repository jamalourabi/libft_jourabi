This project has been created as part of the 42 curriculum by jourabi.

# libft

## Description

The goal of `libft` is to build a personal C static library (`libft.a`) from scratch. Since 42 projects forbid using most standard C library functions, this library recreates core `libc` functions with extra utilities for string manipulation, file descriptor output, and linked lists. It acts as a foundational toolkit that will be reused and expanded in future projects throughout the curriculum.

## Library Overview

The library is divided into three main parts:

### 1. Libc Functions
Re-implementations of standard C functions:
* **Character checks & conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **String operations:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Conversion:** `ft_atoi`

### 2. Additional Functions
Extra helper functions that are either not in `libc` or implemented differently:
* **Strings & splitting:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
* **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Bonus Functions (Linked Lists)
Functions to create, inspect, modify, and free `t_list` singly linked lists:
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation
Run `make` at the root of the repository to compile the mandatory functions into `libft.a`:

```bash
make		# compiles libft.a
make clean 	# removes .o object files
make fclean	# removes .o files and libft.a
make re		# recompiles everything from scratch
```

### Usage
Include `"libft.h"` in your C files and link `libft.a` during compilation:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

## Resources

* Linux `man` pages (`man 3 strlen`, `man 3 memcpy`, `man 3 malloc`, etc.) for exact function behavior and edge cases.
* *The C Programming Language* (Kernighan & Ritchie) for pointers, memory allocation, and data structures.
* 42 Norm documentation (`norminette`) for code formatting rules.

### AI Usage
AI tools were used during this project as a learning aid to:
* Clarify edge cases and pointer behavior (such as overlapping memory in `ft_memmove` and linked list traversal/freeing logic).
* Review code logic and spot potential memory leaks or segmentation faults before testing.
* Generate simple `main` test cases to verify function outputs.
