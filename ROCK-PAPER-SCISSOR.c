#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
static int User_score = 0;
static int Computer_score = 0;
int Generate_Random_Number(void)
{
    srand(time(NULL));
    return rand() % 3;
}
char Generate_Computer_Move(void)
{
    int Random_No = Generate_Random_Number();
    if (Random_No == 0)
    {
        return 'R';
    }
    else if (Random_No == 1)
    {
        return 'P';
    }
    else
    {
        return 'S';
    }
}
void Who_Wins(char UM, char CM)
{
    switch (UM)
    {
    case 'R':
    case 'r':
        if (CM == 'R')
        {
            printf("\tMatch Draw\n");
            printf("Computer Move was Rock");
        }
        else if (CM == 'S')
        {
            printf("\tYou win\n");
            printf("Computer Move was Scissor");
            User_score++;
        }
        else if (CM == 'P')
        {
            printf("\tYou Loose\n");
            printf("Computer Move was Paper");
            Computer_score++;
        }
        else
        {
            printf("Something Went Wrong");
        }

        break;
    case 'P':
    case 'p':
        if (CM == 'P')
        {
            printf("\tMatch Draw\n");
            printf("Computer Move was Paper");
        }
        else if (CM == 'S')
        {
            printf("\tYou Loose\n");
            printf("Computer Move was Scissor");
            Computer_score++;
        }
        else if (CM == 'R')
        {
            printf("\tYou Win\n");
            printf("Computer Move was Rock");
            User_score++;
        }
        else
        {
            printf("Something Went Wrong");
        }

        break;
    case 'S':
    case 's':
        if (CM == 'S')
        {
            printf("\tMatch Draw\n");
            printf("Computer Move was Scissor");
        }
        else if (CM == 'P')
        {
            printf("\tYou win\n");
            printf("Computer Move was Paper");
            User_score++;
        }
        else if (CM == 'R')
        {
            printf("\tYou Loose\n");
            printf("Computer Move was Rock");
            Computer_score++;
        }
        else
        {
            printf("Something Went Wrong");
        }

        break;

    default:
        printf("Something went wrong");
        break;
    }
}
int main()
{
    char Name[30];
    char User_Move, Computer_Move;
    printf("\n\n\t\t  MADE BY SHARAD PRATAP\n");
    printf("\n\t -------- ROCK - PAPER - SCISSOR --------\n");
    printf("\nEnter your Name: ");
    gets(Name);
    printf("\nHello, ");
    puts(Name);
    printf("\n---REMEMBER GAME RULES---\n");
    printf("\n1. Match will have 3 Rounds\n2. Use R -> 'Rock'   P -> 'Paper'   S -> 'Scissor'\n3. Keep Playing the Game until you Win\n");
    system("pause");

    int i = 0;
    while (i < 3)
    {
        printf("\n");
        printf("Round %d\n", i + 1);
        printf("\nPick your move\n");
        printf("\tR --> Rock\tP --> Paper\tS --> Scissor\t\n");
        scanf("%c", &User_Move);
        getchar();
        Computer_Move = Generate_Computer_Move();
        Who_Wins(User_Move, Computer_Move);
        i++;
        printf("\n\n\n");
    }
    printf("\n\n\t\t***** FINAL RESULT ******\n");
    printf("\n\tYou Won %d times\t", User_score);
    printf("\tComputer Won %d times\n", Computer_score);
    if (User_score > Computer_score)
    {
        printf("Congratulations, ");
        puts(Name);
        printf(" You Won the Match");
    }
    else if (User_score < Computer_score)
    {
        printf("OHH!, ");
        puts(Name);
        printf(" You Loose the Match\nTry Again...!");
    }
    else
    {
        printf("Don't Worry. Match is Equal .\n   TRY AGAIN...!");
    }

    printf("\n\n\n\t\tCopyright Sharad Pratap\n\n");
    getchar();
    return 0;
}