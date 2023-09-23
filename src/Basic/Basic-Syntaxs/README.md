# C Hello World Program

## Description

This is a simple "Hello, World!" program written in the C programming language. It serves as a basic introduction to C programming and demonstrates how to print a message to the console.

## Getting Started

To run this program, you'll need a C compiler installed on your computer. Here are some common options for different platforms:

- **For Windows**:
  - Install MinGW: [Download MinGW](http://www.mingw.org/)

- **For macOS**:
  - Install Xcode Command Line Tools: [Install Xcode](https://developer.apple.com/xcode/)

- **For Linux**:
  - You can typically install the GCC compiler through your distribution's package manager.

## Usage

1. Open a terminal or command prompt.

2. Navigate to the directory where you've saved the `hello.c` file.

3. Compile the program using the following command:

   ```bash
   gcc hello.c -o hello



# C Programming Tutorial - Data Types

## Introduction

This section of the tutorial covers the fundamental concept of data types in the C programming language. Data types define the type, size, and representation of data that can be stored and manipulated within a C program. Understanding data types is crucial for effective programming and memory management.

## Table of Contents

- [Basic Data Types](#basic-data-types)
- [Derived Data Types](#derived-data-types)
- [User-Defined Data Types](#user-defined-data-types)

## Basic Data Types

In C, there are several basic data types that include:

- **int**: Represents integers, which are whole numbers. Typically, it uses 4 bytes of memory.
- **float**: Represents single-precision floating-point numbers, which include decimal fractions. Typically, it uses 4 bytes of memory.
- **double**: Represents double-precision floating-point numbers. Typically, it uses 8 bytes of memory.
- **char**: Represents individual characters. Typically, it uses 1 byte of memory.

These basic data types serve as the building blocks for more complex data structures and operations.

## Derived Data Types

Derived data types are created from basic data types and include:

- **Arrays**: Collections of elements of the same data type. The size of an array depends on the number of elements and the size of each element.
- **Pointers**: Variables that store memory addresses. The size of a pointer depends on the architecture (e.g., 4 bytes on 32-bit systems, 8 bytes on 64-bit systems).
- **Structures**: User-defined data types that group together variables of different data types. The size of a structure is the sum of the sizes of its members.
- **Unions**: Similar to structures but only store one value at a time. The size of a union is the size of its largest member.

These derived data types allow you to work with more complex data structures and perform advanced operations.

## User-Defined Data Types

C also allows you to create your own custom data types using the `typedef` keyword. This enables you to define data structures that suit the specific needs of your program.

Here's an example of how to define a user-defined data type:

```c
typedef struct {
    int x;
    int y;
} Point;
