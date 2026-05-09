
/*
 * game.c
 *
 * This file contains the core logic and helper functions for the Tic-Tac-Toe game.
 * Functions include board display, player move handling, and game flow control.
 *
 * Author: Nishidh Singh
 * Date: 09-05-2026
 *
 * Note: This file is intended for use with main.c and related headers.
 */

#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "config.h"

/*
 * Clears the terminal screen for better user experience.
 * Works for both Windows and Unix-like systems.
 */
int clear_screen()
{
    // Check if running on Windows
#ifdef _WIN32
    system("cls"); // Clear screen for Windows
#else
    system("clear"); // Clear screen for Unix/Linux
#endif
    return 0; // Return success
}

/*
 * Prompts the user to enter their move (row and column).
 */
void select_choice()
{
    // Inform the player it's their turn
    printf("YOURS TURN\n");
    // Ask for row and column input
    printf("Enter row and column: \n");
    // Read user input for row and column
    scanf("%d%d", &row, &column);
}

/*
 * Prints the current row and column values (for debugging or display).
 */
void print_row_col()
{
    // Output the current row and column values
    printf("row: %d, column: %d\n", row, column);
}

/*
 * Increments the move count for the specified player.
 * Only increments if player is 1 or 2.
 */
void increment_player_moves(int player)
{
    // Only increment if player is 1 or 2
    if (player != 1 || player != 2)
        return;
    switch (player)
    {
    case 1:
        p1_moves++; // Increment player 1's move count
        break;
    case 2:
        p2_moves++; // Increment player 2's move count
        break;
    default:
        break;
    }
}

/*
 * Sets the current player (1 or 2).
 */
void select_player(int player)
{
    // Only set if valid player
    if (player != 1 || player != 2)
        return;
    current_player = player; // Set the current player
}

void check_victory()
{
    int cm = current_move;

    for (int i = 0; i < winning_State_count; i++)
    {
        int start = winning_state[i][0];
        int mid = winning_state[i][1];
        int last = winning_state[i][2];

        int row_a = board_position[start].dimension[0];
        int col_a = board_position[start].dimension[1];
        int row_b = board_position[mid].dimension[0];
        int col_b = board_position[mid].dimension[1];
        int row_c = board_position[last].dimension[0];
        int col_c = board_position[last].dimension[1];

        int winning_condition = BOARD[row_a][col_a] != EMPTY && BOARD[row_a][col_a] == BOARD[row_b][col_b] && BOARD[row_b][col_b] == BOARD[row_c][col_c];
        if (winning_condition)
        {
            if (BOARD[row_a][col_a] == CROSS)
            {
                clear_screen();
                printf("\nPlayer 1 (X) wins\n");
            }
            else
            {
                printf("\nPlayer 2 (0) wins\n");
            }
            exit(0);
        }
    }
    // check for draw
    int draw = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (BOARD[i][j] == EMPTY)
            {
                draw = 0;
                break;
            }
        }
    }

    if (draw) {
        clear_screen();
        printf("\nno one wins game draws...........\n");
        exit(0);
    }
}

/*
 * Prints the current state of the game board to the terminal.
 * Displays X for CROSS, O for OVAL, or the position number if unoccupied.
 */
void print_board()
{
    // Loop through each row
    for (int i = 0; i < 3; i++)
    {
        printf("| ");
        // Loop through each column
        for (int j = 0; j < 3; j++)
        {
            // Print X for 1, O for 0, or the position number
            if (BOARD[i][j] == 0 || BOARD[i][j] == 1)
            {
                printf("%c | ", BOARD[i][j] == 1 ? 'X' : 'O');
            }
            else
            {
                printf("%d | ", BOARD[i][j]);
            }
        }
        printf("\n");
    }
}

/*
 * Handles a single turn in the game:
 *  - Prompts the current player for their move
 *  - Validates the move
 *  - Updates the board and switches player
 *  - Recursively asks again if invalid input
 */
void game_continuation()
{
    // Prompt the current player for their move
    printf("\n\nPlayer %d turns.....", current_player);
    printf("Select your position: ");
    scanf("%d", &current_position);

    // Validate the input position
    if (current_position > 8 || current_position < 0)
    {
        clear_screen();
        printf("Invalid position entered \n\n\n\n");
        // Recursively ask again for valid input
        game_continuation();
    }

    // If valid, insert the move
    if (current_position >= 0 && current_position <= 8)
    {
        insert_player_move(current_position);
    }

    // Switch to the other player
    current_player = current_player == 1 ? 2 : 1;

    // Clear the screen and print the updated board
    clear_screen();
    check_victory();
    print_board();
}


/*
 * Inserts the current player's move into the board at the specified position.
 * Updates the BOARD array with CROSS (X) or OVAL (O) depending on the player.
 */
void insert_player_move(int position)
{
    // Get row and column from board position mapping
    row = board_position[position].dimension[0];
    column = board_position[position].dimension[1];

    // Check if the position is within the board
    if (row >= 0 && row < 3 && column >= 0 && column < 3)
    {
        if (BOARD[row][column] == 0 || BOARD[row][column] == 1) {
            clear_screen();
            printf("\nthe place is not vaccant choose other positions....\n\n");
            game_continuation();
            return;
        }
        // Place CROSS for player 1, OVAL for player 2
        if (current_player == 1)
        {
            BOARD[row][column] = CROSS;
            return;
        }
        BOARD[row][column] = OVAL;
    }
    return;
}

/*
 * Entry point for starting the game loop.
 * Displays instructions and repeatedly calls game_continuation().
 */
void start_game()
{
    // Print game start message and instructions
    initialize_constant();
    printf("--- GAME STARTS ---\n\n");
    printf("-> Player %d Starts the game.... (X)\n", current_player);
    printf("Select positions \n 0 | 1 | 2  \n 3 | 4 | 5 \n 6 | 7 | 8 \n: ");

    // Main game loop: keep playing until externally stopped
    while (1)
    {
        game_continuation();
    }

    // End of game (unreachable in current logic)
}