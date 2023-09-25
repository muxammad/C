

// In implicit type convertion , the value of one type is automaticlly converted to the value of another type
// For example 

#include <stdio.h>

int main(){

    // created variable and assigned value as double
    double value = 4150.23;
    printf("Double value: %.2lf\n", value);

    // created int type variable and assigned values that created before as a double type
    int number = value;
    printf("Integer value: %d\n", number);

    // Character variable
    char alphabet = 'a';
    printf("Character value: %c\n", alphabet);

    //assigned char value to int
    int digit = alphabet;
    printf("Integer Value: %i\n", digit);

    // Here, C language Compiler automaticlly converted character type to int type (97)
    // This is becouse, in C programmig, characters are internally stored as a integer value known as ASCII Table

    return 0;
}