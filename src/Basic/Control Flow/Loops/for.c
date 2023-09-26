#include <stdio.h>

int main(){

    int count,number = 5;
    printf("Enter the count for Iteration: ");
    scanf("%i",&count);

    for (int i = 1; i <= count; i++)
    {
        printf("iteration %d\n",i);
    }

    // Using a for loop to print the multiplication table of a number
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // Using nested for loops to print a pattern
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = 10; i >=1; --i)
    {
        sleep(1);
        printf("Time remaining: %d seconds\n", i);
    }
    // Using a for loop to print even numbers from 2 to 20
    for (int i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a for loop to create a simple animation
    for (int i = 0; i < 5; i++) {
        sleep(1);
        printf("Loading");
        for (int j = 0; j <= i; j++) {
            printf(".");
        }
        printf("\n");
    }
    


    return 0;
}