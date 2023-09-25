# C Programming Tutorial - Type Conversions

![C Logo](https://raw.githubusercontent.com/github/explore/4e8650f5caebfceea1dd0eab7f3624915dfac1d4/topics/c/c.png)

Welcome to the C Programming Tutorial on Type Conversions. In this tutorial, we'll explore the concept of type conversions in the C programming language and how they play a crucial role in ensuring the accuracy of operations with different data types.

## Table of Contents

- [Introduction](#introduction)
- [Implicit Type Conversion (Type Promotion)](#implicit-type-conversion-type-promotion)
- [Explicit Type Conversion (Type Casting)](#explicit-type-conversion-type-casting)

## Introduction

Type conversions in C allow you to change the data type of a value from one type to another. These conversions are essential for ensuring that operations between values of different types are performed correctly and efficiently. This tutorial covers both implicit and explicit type conversions in C.

## Implicit Type Conversion (Type Promotion)

Implicit type conversion, also known as type promotion, occurs automatically by the C compiler. It ensures that data is not lost during expressions and assignments involving different data types. Understanding implicit type conversion rules is crucial for writing efficient and bug-free code.

## Explicit Type Conversion (Type Casting)

Explicit type conversion, or type casting, allows the programmer to control the conversion process. By using casting operators, you can change a value from one data type to another. This gives you fine-grained control over the conversion and allows you to tailor it to your specific needs.

It's important to use type conversions judiciously to ensure your code operates correctly and efficiently while maintaining data integrity.

Feel free to explore the concepts presented in this tutorial to gain a deeper understanding of implicit and explicit type conversions in C.

Examples for Implicit

```c
#include <stdio.h>

int main(){

    int num1 = 10;
    double num2 = 5.5;

    double result = num1 + num2; // Implicit conversion of int to double

    printf("Display result: %.3lf", result);
    

    double double_number = 10.5;
    int result2 = (int)double_number; // Explicitly cast double to int

    printf("Display result: %.3lf", result2);
    return 0;
}

Happy coding!
