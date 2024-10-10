 # ft_printf - 42 School Project 📜

## Introduction 💡

**ft_printf** is a project at **42 School** that requires implementing a simplified version of the C standard library function `printf`. The goal of this project is to understand how `printf` works under the hood, including formatting specifiers, variable argument lists, and memory management.

The **ft_printf** function should behave similarly to `printf`, and support a subset of the most common formatting options. The focus of this project is on learning how to handle variadic arguments and formatting types in C.

## Functions Implemented 🛠️

**ft_printf** supports the following key format specifiers:
  - **`%c`**: Prints a character.
  - **`%s`**: Prints a string.
  - **`%p`**: Prints a pointer address in hexadecimal format.
  - **`%d`**: Prints a signed decimal integer.
  - **`%i`**: Prints a signed integer (same as `%d`).
  - **`%u`**: Prints an unsigned decimal integer.
  - **`%x`**: Prints an unsigned hexadecimal integer (lowercase).
  - **`%X`**: Prints an unsigned hexadecimal integer (uppercase).
  - **`%%`**: Prints a literal `%` character.

## Installation 📦

To compile and test **ft_printf**, follow these steps:

1. Clone the repository:
   ```bash
   git clone git@github.com:AnnLvu/printf_42.git
   cd printf_42

## Compile ft_printf 💥

 ```bash
 make        # Compiles the ft_pritf library ⚒️
 make clean  # Cleans up object files 🧹
 make fclean  # Full cleanup of generated files 🧼
 make re     # Rebuild everything from scratch 🔄
