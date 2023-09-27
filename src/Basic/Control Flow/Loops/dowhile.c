#include <stdio.h> 

int main()
{
    // example
    int number = 1;

    do
    {
        printf("number %d: \n", number);
        number ++;
    } while (number <= 10);
    printf("Finished");
    
    // example 2
     long long int num, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        do {
            factorial *= num;
            num--;
        } while (num > 0);

        printf("Factorial: %lld\n", factorial);
    }

    //example 3
     int num, sum = 0;

    do {
        printf("Enter a number (negative to exit): ");
        scanf("%d", &num);

        if (num >= 0) {
            sum += num;
        }
    } while (num >= 0);

    printf("Sum of positive numbers entered: %d\n", sum);
    return 0;
}