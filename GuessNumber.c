#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));

    int a = rand() %(100 - 1 + 1) + 1;

    printf("Welcome to guess the number game!");
    printf("Enter your number");

    int entered;
    scanf("%d",&entered);
    printf("Enter you number again");
    while(entered!=a)
    {
        scanf("%d",&entered);
        if(entered>a)
        {
            printf("Number entered is greater than actual number");
        }

        else
        {
            printf("Entered number is less then actual number");
        }
    }

    printf("Your answer is correct! Congratulations!");
    printf("The correct number is %d", entered);
    
    return 0;
}