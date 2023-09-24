#include <stdio.h>

int main(){

    //declaring int data type with name "int_type"
    int int_type; // Size 4 bytes
    //Assign a value to "int_type"
    int_type = 10;
    printf("Assigned int value: %d\n", int_type);
    //example

    printf("Enter an integer:  ");
    int number;
    //reads and stores 
    scanf("%d", &number);
    // display number
    printf("You Entered: %d\n\n", number);

    return 0;
}