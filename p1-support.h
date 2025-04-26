#ifndef CMSC257_P1SUPPORT_INCLUDED
#define CMSC257_P1SUPPORT_INCLUDED

#define BUFSZ 35
////////////////////////////////////////////////////////////////////////////////
//
//  File          : p1-support.h
//  Description   : Set of functions we use
//                  for the 257 project #1.

// Functional Prototypes

// Function     : display_array
// Description  : This function prints out the array of integer values
// Inputs       : an int array of numbers to print and size
// Output       : none
void display_array (int arr[], int);

// Function     : bitwise_add
// Description  : adds two integer parameters using only bitwise operations and loop and returns the result 
// Inputs       : two integers
// Output       : an integer
int bitwise_add (int, int);

// Function     : multiply_by_power_of_two
// Description  : shifts the first parameter to the left by the amount of second parameter. 
// Inputs       : two integers
// Output       : an integer
int multiply_by_power_of_two(int, int);

// Function     : count_set_bits
// Description  : returns number of 1s in bitwise representation of a number 
// Inputs       : an integer
// Output       : an integer
int count_set_bits (int);

// Function     : binary_string
// Description  : fills the char string with a binary representation of the number suitable for printing. 
// Inputs       : an integer and a mutable string
// Output       : void
void binary_string (char*, int);


// Function     : set_bit_range
// Description  : Sets all bits in the range between range_start and range_end in the integer to 1. You cannot use loops; instead, use bitwise operations to generate the mask.
// Inputs       : three integers. First one is the input number. Second and third inputs are range begin and end indices respectively.(least significand bit assumed to be index 0)
// Output       : an integer
int set_bit_range(int num, int start, int end);

// Function     : bitwise_abs
// Description  : Returns the absolute value of a number
// Inputs       : an integer
// Output       : an integer
int bitwise_abs(int num);

// Function     : bit_get
// Description  : returns a specified bit from a given number
// Inputs       : First parameter is the integer, second parameter is position in integer 
// Output       : an integer
int bit_get (int,int);

// Function     : odd_or_even
// Description  : Returns 1 if input is odd, returns 0 else
// Inputs       : an integer 
// Output       : an integer
int odd_or_even ( int);

// Function     : swap_ints
// Description  : swaps the value of two integers using only bitwise operators
// Inputs       : two integers
// Output       : void
void swap_ints (int*,int*);
     

#endif // CMSC257_P1SUPPORT_INCLUDED