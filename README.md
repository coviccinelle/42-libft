# 📚 **Libft** - _Your Very First Own Library_

## Summary
This project involves coding a C library with general-purpose functions essential for future projects.

### Contents
1. [Introduction](#introduction)
2. [Common Instructions](#common-instructions)
3. [Mandatory Part](#mandatory-part)
   - [Technical Considerations](#technical-considerations)
   - [Part 1 - Libc Functions](#part-1-libc-functions)
   - [Part 2 - Additional Functions](#part-2-additional-functions)
4. [Bonus Part](#bonus-part)
   - [List Manipulation Functions](#list-manipulation-functions)

## Introduction
This project focuses on creating a C library to understand, implement, and utilize standard functions essential for C programming. The library will serve as a tool for future C assignments.

## Common Instructions
- Written in C.
- Norm-compliant with penalties for norm errors.
- No unexpected exits or memory leaks.
- Submission of a Makefile for compilation.
- Makefile must contain rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- Bonus submission includes a separate `_bonus.{c/h}` file.

## Mandatory Part

### Technical Considerations
- No global variables.
- Use static functions for helper functions.
- Place all files at the root of the repository.
- No turning in of unused files.
- All `.c` files must compile with `-Wall -Wextra -Werror`.
- Use `ar` to create the library.

### Part 1 - Libc Functions
Redo a set of functions from libc with names prefixed by 'ft_'. Implementations must match original functions' behaviors.

![image](https://github.com/coviccinelle/42-libft/assets/51762886/4f333c53-c731-4bec-aa06-3d5cce1f79b3)


### Part 2 - Additional Functions
Develop a set of new functions or variations not present in libc.

## Bonus Part

### List Manipulation Functions
Use the provided `t_list` structure to manipulate linked lists. Implement functions to create, add, count, delete, iterate, and map linked lists.

**Note:** Bonus part assessed only if the mandatory part is perfect. Perfect means all mandatory requirements are fulfilled without malfunctioning.
