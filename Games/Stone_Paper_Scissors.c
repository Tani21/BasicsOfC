#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int score_player_one=0;
int score_computer=0;

void BasicInstructions();
void calculateResult(int playerone);

int main()
{
   BasicInstructions();

   int playerone=0; 
   while(score_player_one<5 && score_computer<5)
   {
        printf(" Your turn\n");
        scanf("%d", &playerone);
        calculateResult(playerone);
        printf("\n\n");
   }

   if(score_player_one==5)
   {
       printf("Congratulations! Player 1 won!!\n");
   }   

   if(score_computer==5)
   {
       printf("Congratulations! Player 1 won!!\n");
   }    

   return 0;
}

void BasicInstructions()
{
    printf("Welcome to Stone Paper and Scissors! \n\n");
    printf("RULES:\n");
    printf(" * You will be playing against computer\n");
    printf(" * Enter 1 for Stone, 2 for Paper, 3 for Scissors\n");
    printf(" * In case of stone and paper, paper wins\n");
    printf(" * In case of paper and scissors, scissors win\n");
    printf(" * In case of stone and scissors, stone wins\n\n");

    printf(" * One point will be awarded for every win, there are no negative points\n");
    printf(" * The player who gets 5 points first, wins!\n\n");

    printf("------------------------------------------------------------------------ \n\n");
    printf(" Lets Begin!");

}

void calculateResult(int playerone)
{
    srand(time(0));
    int computer = (rand() %(3 - 1 + 1)) + 1;

    if(computer==1 && playerone == 2) 
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        score_player_one=score_player_one+1;
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);

    }

    else if (computer == 2 && playerone == 1 ) 
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        score_computer=score_computer+1;
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);
    }

    else if (computer == 2 && playerone == 3 )
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        score_player_one=score_player_one+1;
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);
    }

    else if (computer == 3 && playerone == 2 ) 
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        score_computer=score_computer+1;
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);
    }

    else if (computer == 1 && playerone == 3 ) 
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        score_computer=score_computer+1;
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);
    }

    else if (computer == 3 && playerone == 1) 
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        score_player_one=score_player_one+1;
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);
    }

    else if( computer == 1 && playerone ==1)
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);

    }

    else if( computer == 3 && playerone ==3)
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);

    }

    else if( computer == 2 && playerone ==2)
    {
        printf("Playerone chose %d \n", playerone);
        printf("Computer chose %d \n", computer);
        printf("Player one score: %d\n", score_player_one);
        printf("Computer Score: %d\n", score_computer);

    }

    else{
        printf("error");
    }
}
