# Bitwise Utility Functions Library (`p1-support.c`)

## Overview
This project is a collection of general-purpose **bitwise operation utility functions** written in C, designed to assist with various lower-level computational tasks for CMSC 257 - Computer Systems coursework.

Developed by **Aaron Tuck** — February 2025.

The utilities provide optimized implementations for arithmetic, bit manipulation, and binary string formatting operations without relying on standard arithmetic operators.

---

## Features
This utility library includes:

- **Array Display**
  - `display_array(int* arr, int size)`  
    Prints an array of integers in a formatted style.
  
- **Bitwise Arithmetic**
  - `bitwise_add(int num1, int num2)`  
    Adds two integers using only bitwise operations.
  - `multiply_by_power_of_two(int num, int power)`  
    Multiplies an integer by a power of two using bit shifting.
  - `bitwise_abs(int num)`  
    Computes the absolute value of an integer using bitwise manipulation.

- **Bitwise Manipulation**
  - `count_set_bits(int num)`  
    Counts the number of set bits (1's) in an integer.
  - `set_bit_range(int num, int start, int end)`  
    Sets a specific range of bits in an integer to 1.
  - `bit_get(int num, int bit_position)`  
    Retrieves the value of a specific bit in an integer.

- **Binary Representation**
  - `binary_string(char* str, int num)`  
    Converts an integer to a printable binary string format.

- **Other Utilities**
  - `odd_or_even(int num)`  
    Determines if an integer is odd or even.
  - `swap_ints(int* a, int* b)`  
    Swaps two integers using only bitwise operations.

---

## Usage

### 1. Include Header
Include `p1-support.h` to use the available function declarations.

```c
#include "p1-support.h"
