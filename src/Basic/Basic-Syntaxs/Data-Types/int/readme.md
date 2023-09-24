# C Integer Data Types

## Introduction

This section covers various integer data types in the C programming language. Understanding integer data types, their sizes, and usage is essential for working with whole numbers effectively.

## Table of Contents

- [Short Integer (`short`)](#short-integer-short)
- [Integer (`int`)](#integer-int)
- [Long Integer (`long`)](#long-integer-long)
- [Unsigned Short Integer (`unsigned short`)](#unsigned-short-integer-unsigned-short)
- [Unsigned Integer (`unsigned int`)](#unsigned-integer-unsigned-int)
- [Unsigned Long Integer (`unsigned long`)](#unsigned-long-integer-unsigned-long)

## Sizes
- **Short Integer**: usually 2 bytes.
- **Integer**: 4 bytes.
- **Long Integer**: 8 bytes.
- **Long Long Integer**: 8 bytes
- **Unsigned Short Integer**: 2 bytes
- **Unsigned Integer**: 4 bytes
- **Unsigned Long Integer**: 8 bytes
- **Unsigend Long Long Integer**: Typically 8 bytes




Example:
```c
#include <stdio.h>

int main() {
    short myShort = 12345;
    int myInt = 42;
    long myLong = 987654321;
    unsigned short myUShort = 65535;
    unsigned int myUInt = 4294967295;
    unsigned long myULong = 18446744073709551615ULL;
    
    printf("Short: %hd\n", myShort);
    printf("Int: %d\n", myInt);
    printf("Long: %ld\n", myLong);
    printf("Unsigned Short: %hu\n", myUShort);
    printf("Unsigned Int: %u\n", myUInt);
    printf("Unsigned Long: %lu\n", myULong);

    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
    
    return 0;
}
