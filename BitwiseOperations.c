#include "p1-support.h"

#include <stdio.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////
// File           : p1support.c
// Description    : Set of general-purpose utility functions for project1
// Author         : Aaron Tuck
// Date           : 02/25/2025
// Notes          : Refactored helper functions into code.
////////////////////////////////////////////////////////////////////////

// This function prints out the array of integer values.
void display_array(int* arr, int size) {
  int i;
  printf("{");
  for (i = 0; i < size; i++) {
    printf("%4d%s", arr[i], (i == 9) ? "" : ",");
  }
  printf("}\n");
}

// Description  : adds two integer parameters using only bitwise operations and
// loop and returns the result.
int bitwise_add(int num1, int num2) {
  long overflowProtector = 0xffffffff;
  while ((num2 & overflowProtector) != 0) {
    int carry = ((num1 & num2) & overflowProtector) << 1;
    num1 = num1 ^ num2;
    num2 = carry;
  }
  return num1 & overflowProtector;
}

// Description  : shifts the first parameter to the left by the amount of second
// parameter.
int multiply_by_power_of_two(int num, int power) { return num << power; }

// Description  : returns number of 1s in bitwise representation of a number.
int count_set_bits(int num) {
  int count = 0;
  char binaryString[35];
  int index = 0;
  int start = 0;
  int i;

  // This generates trimmed binary string from num.
  for (i = 31; i >= 0; i--) {
    if ((num >> i) & 1) {
      start = 1;
      binaryString[index++] = '1';
    } else if (start) {
      binaryString[index++] = '0';
    }
  }
  if (!start) {
    binaryString[index++] = '0';
  }
  binaryString[index] = '\0';

  // Count '1's in the binary string.
  for (i = 0; binaryString[i] != '\0'; i++) {
    if (binaryString[i] == '1') {
      count++;
    }
  }
  return count;
}

// Description  : fills the char string with a binary representation of the
// number suitable for printing.

void binary_string(char* str, int num) {
  char fullString[33];
  int i;

  // generate full 32-bit binary string from num.
  for (i = 31; i >= 0; i--) {
    if ((num >> i) & 1) {
      fullString[31 - i] = '1';
    } else {
      fullString[31 - i] = '0';
    }
  }
  fullString[32] = '\0';

  sprintf(str, "0b%s", fullString);
}

// Description  : Sets all bits in the range between range_start and range_end
// in the integer to 1.
int set_bit_range(int num, int start, int end) {
  int mask = ((1 << (end - start + 1)) - 1) << start;
  return num | mask;
}

// Description  : Returns the absolute value of a number.
int bitwise_abs(int num) {
  int mask = num >> 31;
  return (mask & (~num + 1)) | (~mask & num);
}

// Description  : returns a specified bit from a given number.
int bit_get(int num, int bit_position) {
  char binaryString[35];
  int i;

  // Converts num to full binary string.
  for (i = 31; i >= 0; i--) {
    if ((num >> i) & 1) {
      binaryString[31 - i] = '1';
    } else {
      binaryString[31 - i] = '0';
    }
  }
  binaryString[32] = '\0';

  if (bit_position < 0 || bit_position >= 32) {
    return -1;
  }
  return binaryString[31 - bit_position] - '0';
}

// Description  : Returns 1 if input is odd, returns 0 else.
int odd_or_even(int num) { return num & 1; }

// Description  : swaps the value of two integers using only bitwise operators.
void swap_ints(int* a, int* b) {
  if (a != b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
  }
}
