
/*
 * main.c
 *
 * Entry point for the Tic-Tac-Toe game application.
 * Calls the game start logic and handles program exit.
 */

#include "game.h"
#include <stdio.h>

int main() {
    /*
     * Start the Tic-Tac-Toe game loop.
     * All game logic is handled in start_game().
     */
    start_game();

    // Return 1 to indicate program finished (could use 0 for success)
    return 1;
}