# 🖨️ ft_printf

[![42 School Project](https://img.shields.io/badge/42-Project-blue?style=flat-square&logo=42)](https://42.fr)
[![C Programming](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)

> 🎯 **A complete recreation of the C standard library function `printf`**

This project is part of the **42 School curriculum** and focuses on mastering formatted output, variadic functions, and advanced data type handling in C programming.

---

## 📘 Overview

The **ft_printf** project is designed to replicate the complete behavior of the original `printf` function, enabling sophisticated formatted printing to standard output.

### 🎓 Learning Objectives
- Master **variadic arguments** (`va_list`, `va_start`, `va_arg`, `va_end`)
- Implement robust **string manipulation** and parsing
- Handle **memory management** efficiently
- Practice **modular programming** with clean code architecture

---

## ✨ Supported Conversions

Our implementation supports all the essential printf conversion specifiers:

<div align="center">

| Specifier | Description | Example |
|:---------:|-------------|---------|
| `%c` | Single character | `ft_printf("%c", 'A')` → `A` |
| `%s` | String of characters | `ft_printf("%s", "Hello")` → `Hello` |
| `%p` | Pointer address (hexadecimal) | `ft_printf("%p", &var)` → `0x7fff5fbff5ac` |
| `%d` | Signed decimal integer | `ft_printf("%d", -42)` → `-42` |
| `%i` | Signed integer (same as %d) | `ft_printf("%i", 123)` → `123` |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 42U)` → `42` |
| `%x` | Lowercase hexadecimal | `ft_printf("%x", 255)` → `ff` |
| `%X` | Uppercase hexadecimal | `ft_printf("%X", 255)` → `FF` |
| `%%` | Literal percent character | `ft_printf("%%")` → `%` |

</div>

---

## � Quick Start

### Prerequisites
- GCC compiler
- Make utility
- Standard C library

### �🛠️ Compilation

```bash
# Compile the library
make

# Clean object files
make clean

# Remove all generated files (including libftprintf.a)
make fclean

# Rebuild everything from scratch
make re
```

### 🧩 Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    int count;
    
    // Basic usage
    ft_printf("Hello, %s!\n", "World");
    
    // Multiple format specifiers
    count = ft_printf("Number: %d, Hex: %x, Char: %c\n", 42, 255, 'A');
    
    // Return value (number of characters printed)
    ft_printf("Total characters printed: %d\n", count);
    
    // Pointer addresses
    int value = 42;
    ft_printf("Address of value: %p\n", &value);
    
    return (0);
}
```

**Expected Output:**
```
Hello, World!
Number: 42, Hex: ff, Char: A
Total characters printed: 26
Address of value: 0x7fff5fbff5ac
```

## 📁 Project Structure

```
ft_printf/
├── 📄 Makefile              # Build configuration
├── 📋 README.md             # Project documentation
├── 📂 Includes/
│   └── ft_printf.h          # Header file with function prototypes
└── 📂 Srcs/
    ├── ft_printf.c          # Main printf implementation
    ├── ft_putchar.c         # Character output function
    ├── ft_putstr.c          # String output function
    ├── ft_putnbr.c          # Number output function
    ├── ft_unsigned.c        # Unsigned number handling
    ├── ft_to_hexa.c         # Hexadecimal conversion
    └── ft_pointer.c         # Pointer address formatting
```

## 💡 Key Programming Concepts

<div align="center">

| Concept | Description | Implementation |
|---------|-------------|----------------|
| **Variadic Functions** | Functions with variable arguments | `va_list`, `va_start`, `va_arg`, `va_end` |
| **Format Parsing** | Analyzing format string patterns | State machine for `%` specifiers |
| **Base Conversion** | Number system transformations | Decimal ↔ Hexadecimal conversion |
| **Memory Safety** | Proper memory handling | Null pointer checks, buffer management |
| **Modular Design** | Clean code architecture | Separate functions for each data type |

</div>

## 🎯 Features

- ✅ **Complete printf functionality** for all supported specifiers
- ✅ **Return value accuracy** (exact character count)
- ✅ **Memory-safe implementation** with proper error handling
- ✅ **Modular architecture** for easy maintenance and testing
- ✅ **42 School norm compliant** code style
- ✅ **No memory leaks** or undefined behavior

---

## 👨‍💻 Author

<div align="center">

**Abdullah Sauafth**

[![Email](https://img.shields.io/badge/Email-jabr.abood%40yahoo.com-red?style=flat-square&logo=gmail)](mailto:jabr.abood@yahoo.com)
[![42 Profile](https://img.shields.io/badge/42-Profile-blue?style=flat-square&logo=42)](https://profile.intra.42.fr/)
[![GitHub](https://img.shields.io/badge/GitHub-aboodjabr0-black?style=flat-square&logo=github)](https://github.com/aboodjabr0)

</div>

---

<div align="center">

**⭐ If this project helped you, please consider giving it a star!**

*Made with ❤️ as part of the 42 School journey*

</div>