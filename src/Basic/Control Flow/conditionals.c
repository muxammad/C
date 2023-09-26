#include <stdio.h>

int main(){

    int number; 
    
    printf("Enter the number: ");
    scanf("%d",&number);

    // checks entered integer for ever or nit
    if (number % 2 == 0)
    {
        printf("%d integer is even: ", number);
    }
    // else entered number is odd
    else{
        printf("%i is odd integer ",number);
    }
    

    return 0;
}