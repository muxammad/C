#include <stdio.h>

int main()
{
    int number = 10;

    while (number != 0)
    {
        printf("While loop number %d : \n", number);
        --number;
    }

    while (1)
    {
        printf("Enter the number: ");
        scanf("%i", &number);

        if (number < 0){
            break;}
            else{
                printf("Invalid input: Plese try again\n");
            }        
    }

    int num,sum=0,digit;

    printf("Enter the number: ");
    scanf("%d",&num);

    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num/=10;
    }
    
    printf("Sum of entered number: %d\n",sum);
    
    

    return 0;
}