# C Programming Tutorial - Char Data Type

## Introduction

The `char` data type in C is used to represent individual characters. It is a fundamental data type that allows you to work with characters, including letters, digits, punctuation marks, and control characters. Understanding the `char` data type is essential for tasks involving character manipulation and text processing.

## Char Data Type Size

The `char` data type is typically 1 byte in size on most systems. This means it can store a single character from the character set, which includes ASCII characters and more.

## Code Example

Here's a simple code example that demonstrates the use of the `char` data type:

```c
#include <stdio.h>

int main() {
    // Declare a char variable and assign a character to it
    char myChar = 'A';

    // Print the character
    printf("Character: %c\n", myChar);

    return 0;
}
