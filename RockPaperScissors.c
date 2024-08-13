#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner
int StonePaperScissors(char player1, char player2)
{
    // Check for a draw
    if (player1 == player2)
    {
        return 0;
    }
    // Check winning conditions for player 1
    if (player1 == 'p' && player2 == 'r' ||
        (player1 == 'r' && player2 == 's') ||
        (player1 == 's' && player2 == 'p'))
    {
        return 1; // Player 1 wins
    }
    else
    {
        return -1; // Player 2 wins
    }
}

int main()
{
    // Set console color and welcome message
    system("color 60");
    printf("*****************************WELCOME TO ROCK PAPER SCISSORS GAME*******************************\n\n");

    // Instructions for the game
    printf("Instructions:-\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("1) Rock is represented by r.\n");
    printf("2) Scissor is represented by s.\n");
    printf("3) Paper is represented by p.\n");
    printf("4) Maximum of two players can play this game.\n");
    printf("5) If one player picks rock and one scissors, the player who showed rock wins the dispute.\n");
    printf("6) If one player picks scissors and the other paper, the player who showed scissors succeeds.\n");
    printf("7) If a player shows paper while the other shows rock, the player who picked paper succeeds.\n");
    printf("8) If both players show rock/paper/scissor, the game is a draw.\n");
    printf("-----------------------------------------------------------------------------------------------\n");

    int i, n, p1, p2;      // Variables for rounds and scores
    char player1, player2; // Variables for players' choices
    char playAgain;

    do
    {
        p1 = 0; // Reset player 1's score
        p2 = 0; // Reset player 2's score

        printf("\nSelect the game mode: Against computer (press 1) or Multi-player (press 2): ");
        scanf("%d", &i);
        (i == 1) ? printf("You chose play against computer mode.\n") : printf("You chose Multi-Player mode.\n");

        // If playing against the computer
        if (i == 1)
        {
            srand(time(0)); // Seed random number generator
            int number;     // Variable to hold random number
            printf("Enter the number of rounds: ");
            scanf("%d", &n);

            for (i = 1; i <= n; i++)
            {
                number = rand() % 100 + 1; // Generate random number for computer's choice
                if (number < 33)
                {
                    player2 = 'r'; // Computer chooses Rock
                }
                else if (number < 66)
                {
                    player2 = 'p'; // Computer chooses Paper
                }
                else
                {
                    player2 = 's'; // Computer chooses Scissors
                }

                printf("========================================== ROUND %d =============================================\n", i);
                printf("Enter 'r' for rock, 'p' for paper, 's' for scissors: ");
                scanf(" %c", &player1); // Player's choice

                int result = StonePaperScissors(player1, player2); // Determine the result
                printf("You chose %c and computer chose %c.\n", player1, player2);
                if ((player1 == 'r' || player1 == 'p' || player1 == 's') &&
                    (player2 == 'r' || player2 == 'p' || player2 == 's'))
                {
                    if (result == 0)
                    {
                        printf("Game draw!\n");
                    }
                    else if (result == 1)
                    {
                        printf("Point goes to you!\n");
                        p1++;
                    }
                    else
                    {
                        printf("Point goes to computer!\n");
                        p2++;
                    }
                }
                else
                {
                    printf("Invalid character input!\n\n");
                }
            }

            // Display final results
            printf("================================================================================================\n");
            printf("Round finish......... \nResults:-");
            if (p1 > p2)
            {
                printf("You win!!\n");
            }
            else if (p1 < p2)
            {
                printf("Computer wins!!\n");
            }
            else
            {
                printf("Game Tie, Both played well!\n");
            }
        }
        // If playing against another player
        else if (i == 2)
        {
            printf("Enter the number of rounds: ");
            scanf("%d", &n);

            for (i = 1; i <= n; i++)
            {
                printf("========================================== ROUND %d =============================================\n", i);
                printf("Player 1, enter 'r' for rock, 'p' for paper, 's' for scissors: ");
                scanf(" %c", &player1); // Player 1's choice

                printf("Player 2, enter 'r' for rock, 'p' for paper, 's' for scissors: ");
                scanf(" %c", &player2); // Player 2's choice

                int result = StonePaperScissors(player1, player2); // Determine the result
                printf("\nPlayer 1 chose %c and Player 2 chose %c.\n\n", player1, player2);
                if ((player1 == 'r' || player1 == 'p' || player1 == 's') &&
                    (player2 == 'r' || player2 == 'p' || player2 == 's'))
                {
                    if (result == 0)
                    {
                        printf("Game draw!\n\n");
                    }
                    else if (result == 1)
                    {
                        printf("Point goes to Player 1!\n\n");
                        p1++;
                    }
                    else if (result == -1)
                    {
                        printf("Point goes to Player 2!\n\n");
                        p2++;
                    }
                }
                else
                {
                    printf("Invalid character input!\n\n");
                }
            }

            // Display final results
            printf("================================================================================================\n");
            printf("Round finish......... \nResults:-");
            if (p1 > p2)
            {
                printf("Player 1 wins!\n");
            }
            else if (p1 < p2)
            {
                printf("Player 2 wins!\n");
            }
            else
            {
                printf("Game Tie, Both played well!\n");
            }
        }

        // Ask if the user wants to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain); // Read the user's choice

    } while (playAgain == 'y' || playAgain == 'Y'); // Continue if the user inputs 'y' or 'Y'

    printf("Thanks for playing this game!\n");
    return 0;
}
