#include <stdio.h>

int main(){

    //Assigned float value to int  
    int number = 34.75;
    printf("%d", number);

    number = 27.7;
    printf("%d", number);
    
    // Here, we assigned double value to int type and the double value automaticlly converted to int 34 and 27
    // This is convertion is known as implicit type conversion this one of two type convertions
    
    return 0;
}