// game.h
#ifndef TIC_TAC_TOE_FUNC
#define TIC_TAC_TOE_FUNC

void initialize_constant();
void increment_player_moves(int player);
void select_choice();
void print_row_col();
void insert_player_move(int position); 
void start_game();
void select_player(int player);
void print_board();
void check_victory();

#endif

/*
0, 1, 2
3, 4, 5,
6, 7, 8

0, 4, 5,
2, 4, 6
*/;