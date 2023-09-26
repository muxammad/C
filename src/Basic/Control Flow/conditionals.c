#include <stdio.h>

int main(){

    int number; 
    
    printf("Enter the number: ");
    scanf("%d",&number);

    // checks entered integer for ever or nit
    if (number % 2 == 0)
    {
        printf("%d integer is even: \n", number);
    }
    // else entered number is odd
    else{
        printf("%i is odd integer\n",number);
    }
    
    int num1,num2;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    //checks if the two integers are equal.
    if (num1 == num2)
    {
        printf("%d = %d", num1, num2);
    }
        
    //checks if number1 is greater than number2.
    else if (num1 < num2)
    {
        printf("%d < %d", num1, num2);
    }
    
    //checks if both test expressions are false
    else{
        printf("%d > %d\n", num2,num1);
    }
    
    return 0;
}