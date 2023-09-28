# C Programming Tutorial - Floating-Point Data Types

## Introduction

Floating-point data types in C are used to represent real numbers, including decimal fractions. Understanding floating-point data types is essential for performing calculations involving non-integer numbers. In C, there are three primary floating-point data types: `float`, `double`, and `long double`.

## Floating-Point Data Types Size

- **float**: Typically 4 bytes in size.
- **double**: Typically 8 bytes in size.
- **long double**: The size may vary but is usually larger than `double`.

These data types provide different levels of precision and range, with `long double` offering the highest precision.
122345678
## Code Example

Here's a simple code example that demonstrates the use of floating-point data types:

```c
#include <stdio.h>

int main() {
    // Declare and initialize floating-point variables
    float myFloat = 3.14159;
    double myDouble = 2.71828;
    long double myLongDouble = 0.12345678901234567890L;

    // Print the values
    printf("Float: %.2f\n", myFloat);
    printf("Double: %.5lf\n", myDouble);
    printf("Long Double: %.20Lf\n", myLongDouble);

    return 0;
}

