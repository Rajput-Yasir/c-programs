#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    char play_again;
    do
    {
        // Seed the random number generator
        srand(time(0));

        // Generate a random number between 0 and 2
        int computer = rand() % 3, player;
        int valid_input = 0;

        printf("\n=== Snake Water Gun Game ===\n");
        printf("Choose:\n");
        printf("0 for Snake\n");
        printf("1 for Water\n");
        printf("2 for Gun\n");
        printf("Your choice: ");

        while (!valid_input)
        {
            if (scanf("%d", &player) != 1 || player < 0 || player > 2)
            {
                printf("Invalid input! Please enter 0, 1, or 2: ");
                // Clear input buffer
                while (getchar() != '\n')
                    ;
                continue;
            }
            valid_input = 1;
        }

        printf("Computer chose: %d\n", computer);

        if (computer == 0 && player == 0)
        {
            printf("It's a draw!\n");
        }
        else if (computer == 0 && player == 1)
        {
            printf("Computer wins!\n");
        }
        else if (computer == 0 && player == 2)
        {
            printf("Player wins!\n");
        }
        else if (computer == 1 && player == 0)
        {
            printf("Player wins!\n");
        }
        else if (computer == 1 && player == 1)
        {
            printf("It's a draw!\n");
        }
        else if (computer == 1 && player == 2)
        {
            printf("Computer wins!\n");
        }
        else if (computer == 2 && player == 0)
        {
            printf("Computer wins!\n");
        }
        else if (computer == 2 && player == 1)
        {
            printf("Player wins!\n");
        }
        else if (computer == 2 && player == 2)
        {
            printf("It's a draw!\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        while (getchar() != '\n')
            ; // Clear input buffer
        scanf("%c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
