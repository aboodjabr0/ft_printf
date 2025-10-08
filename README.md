# 🖨️ ft_printf

A recreation of the C standard library function `printf`.  
This project is part of the 42 curriculum and focuses on formatted output, variadic functions, and handling different data types in C.

---

## 📘 Overview

The **ft_printf** project aims to replicate the behavior of the original `printf` function,  
allowing formatted printing to the standard output.  

It deepens your understanding of variadic arguments (`va_list`), string manipulation,  
and memory handling — essential skills for any C developer.

---

## 🧠 Supported Conversions

| Specifier |             Description                  |
|-----------|------------------------------------------|
|   `%c`    | Prints a single character                |
|   `%s`    | Prints a string                          |
|   `%p`    | Prints a pointer address in hexadecimal  |
|   `%d`    | Prints a signed decimal integer          |
|   `%i`    | Prints a signed integer (same as `%d`)   |
|   `%u`    | Prints an unsigned decimal integer       |
|   `%x`    | Prints a number in lowercase hexadecimal |
|   `%X`    | Prints a number in uppercase hexadecimal |
|   `%%`    | Prints a literal `%` character           |

---

## 🛠️ Compilation

To compile the library:
```bash
make

To remove object files:
    make clean

To remove all generated files (including libft.a):
    make fclean

To rebuild everything:
    make re

🧩 Example Usage

    #include "ft_printf.h"

    int main(void)
    {
        int count;

        count = ft_printf("Hello %s! The number is %d\n", "World", 42);
        ft_printf("Printed %d characters.\n", count);
        return (0);
    }

🧱 Key Concepts

Variadic functions (stdarg.h)

String and number formatting

Base conversions (decimal, hexadecimal)

Function modularity and error handling

🧑‍💻 Author
    Abdullah Sauafth
📧 [jabr.abood@yahoo.com]