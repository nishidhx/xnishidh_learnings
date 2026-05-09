
/*
 * config.c
 *
 * Contains configuration data, global variables, and initialization logic
 * for the Tic-Tac-Toe game. This file defines the board layout, player state,
 * and winning conditions.
 */

#include "config.h"

/*
 * Maps board positions (0-8) to their corresponding row and column.
 */
struct positions board_position[9] = {
    {0, {0, 0}},
    {1, {0, 1}},
    {2, {0, 2}},
    {3, {1, 0}},
    {4, {1, 1}},
    {5, {1, 2}},
    {6, {2, 0}},
    {7, {2, 1}},
    {8, {2, 2}}
};

// Game state variables
int row = 0;           // Current row for move
int column = 0;        // Current column for move
int current_player;    // Tracks which player's turn it is
int current_move;      // Tracks the current move number
int current_position;  // Last selected board position

// Player move counters
int p1_moves;
int p2_moves;

/*
 * Defines all possible winning combinations (rows, columns, diagonals).
 * Each sub-array contains the board positions that form a win.
 */
int winning_state[8][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},
    {2, 4, 6}};
int winning_State_count = 8;

// The game board: 3x3 grid. 1 = X, 0 = O, 8 = empty/uninitialized
int BOARD[3][3] = {
    {1, 8, 8},
    {8, 0, 8},
    {8, 8, 1}};

/*
 * Resets the game state to initial values before a new game starts.
 */
void initialize_constant()
{
    // Set player 1 to start
    current_player = 1;
    // Reset move counters
    p1_moves = 0;
    p2_moves = 0;
}

