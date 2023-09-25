

// In implicit type convertion , the value of one type is automaticlly converted to the value of another type
// For example 

#include <stdio.h>

int main(){

    // created variable and assigned value as double
    double value = 4150.23;
    printf("Double value: %.2lf\n", value);

    // created int type variable and assigned values that created before as a double type
    int number = value;
    printf("Integer value: %d", number);

    return 0;
}