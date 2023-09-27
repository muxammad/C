#include <stdio.h>
#include <stdbool.h>


bool is_prime(int n){
    if (n <= 1){
        return false;
    }

    for (int i = 2; i * i <= n; i++){
      if (n % i == 0 ){
        return false;
      }
      
    }
    return true;
}

int main()
{
    int n;
    do
    {
        printf("Enter the number to check for prime: ");
        scanf("%i",&n);
    if (n > 0){
        if ((is_prime(n))){
            printf("%i is prime number\n",n);
        }
        else {
            printf("%i is not prime\n",n);
        }
    }else if(n <= 0){
        printf("Pleae enter the posiitive number:\n");
    }
      
    } while (n =! 0);
    
    return 0;
}