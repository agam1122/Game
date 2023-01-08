#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int game(char you, char computer)
{
    if (you == computer)
    {
        return 0;
    }
    else if ((you == 's' && computer == 'p') || (you == 'p' && computer == 'r') || (you == 'r' && computer == 's'))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    char you, computer;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        computer = 's';
    }
    else if (number < 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 'r';
    }
    printf("Enter's' for scissor, 'p' for paper and 'r' for rock\n");
    scanf("%c", &you);
    int result = game(you, computer);

    if (result == 0)
    {
        printf("It's Drawwwwwwwww\n");
    }
        else if(result == -1)
    {
        ("You lost\n");
    }
    else if (result == 1)
    {
        printf("Congrats! you won\n");
    }

    printf("You chose '%c' and computer chose '%c'", you, computer);
getch();
    return 0;
}