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

## Short Integer (`short`)

- **Size**: Typically 2 bytes
- **Description**: Represents short signed integers.

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
    
    return 0;
}
