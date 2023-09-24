#include <stdio.h>

int main(){

    //Declare and store with data
    char character,character2;
    // reads character from console
    printf("Enter the any characters: ");
    scanf("%c", &character);

    printf("Enter the any characters: ");
    scanf("%c\n", &character2);

    // display entered input
    printf("Entered character %c\n\n", character);
    printf("Entered character %c\n\n", character2);

    // count sums of two entered chars
    printf("Sum of entered characters %d:  \n", sizeof(character) + sizeof(character2));

    return 0; 
}