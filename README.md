*This project has been created as part of the 42 curriculum by pmeei-we*

# ft_printf

## Description

`ft_printf` is a reimplementation of the C standard library function `printf()`, written from scratch as part of the 42 curriculum.

The goal of this project is to learn how variadic functions work and how to handle different types of arguments using format specifiers.

## Overview

`ft_printf` is compiled into a static library, `libftprintf.a`.

The format string is read character by character. Normal characters are printed directly, while `%` is used to identify the type of argument that needs to be printed.

The mandatory conversions are:

| Conversion | Description |
|---|---|
| `%c` | Single character |
| `%s` | String (prints `(null)` if the argument is `NULL`) |
| `%p` | Pointer address, printed in hexadecimal (prints `(nil)` if `NULL`) |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Unsigned hexadecimal integer, lowercase |
| `%X` | Unsigned hexadecimal integer, uppercase |
| `%%` | Literal percent sign |

The function returns the total number of characters printed, just like the original `printf()`.

This submission implements the **mandatory part only**. The bonus flags (`- 0 .` and `# + `space``) are not implemented.

## Instructions

### Compilation

```bash
make
```

This builds `libftprintf.a` at the root of the repository using `ar`.

Other available rules:

```bash
make clean   # remove object files
make fclean  # remove object files and the library
make re      # fclean + full rebuild
```

### Using the library in your own project

Include the header and link against the compiled library:

```c
#include "ft_printf.h"
```

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lftprintf -o your_program
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    int written;
    
    written = ft_printf("Hello %s, you are %d years old (%x)\n",
                             "World", 42, 42);
    ft_printf("Characters written: %d\n", written);
    return (0);
}
```

## Algorithm

The format string is read from left to right.

When `%` is encountered, the following character determines which conversion function is called.

`va_list` is used to access the arguments passed to `ft_printf`.

Numeric conversions use recursive functions to print digits in the correct order without using a temporary buffer.

`%p` converts the pointer to `uintptr_t` and prints it in hexadecimal.

The function returns the total number of characters printed.

## AI usage

Claude (Anthropic) was used during the development of this project as a debugging and code review tool. AI assistance was mainly used to review existing code, identify potential logic and edge-case issues, explain C concepts related to variadic functions, and help understand test results when comparing `ft_printf` with the original `printf`.

All code was written by the author. AI was used for explanation, code review, and bug-spotting, and was not used to generate complete function implementations from the project subject.

## Resources

- Linux manual pages (man): `man 3 printf`
- cppreference — Variadic functions (https://en.cppreference.com/w/c/variadic)
- The 42 `ft_printf` subject PDF.
