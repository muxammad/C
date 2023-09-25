// In explicit convertion we manually convert data type to another data type
// For example

#include <stdio.h>

int main(){

    // create an integer variable
    int integer_number = 23;
    printf("This is integer number: %i\n", integer_number);

    // explicit type conversion
    double double_number = (double) integer_number;
    printf("This is double number: %.2lf\n",double_number);

    // create an integer variable
    int number = 97;
    printf("This is integer number: %i\n", number);

    // create a char variable
    char alphabet = (char)number;
    printf("This is charecter after converted explitcitlly: %c\n", alphabet);


    return 0;
}
