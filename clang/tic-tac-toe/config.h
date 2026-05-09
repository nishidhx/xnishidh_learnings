#ifndef CONFIG_H
#define CONFIG_H


#define CROSS 1
#define OVAL 0
#define EMPTY 8

extern int BOARD[3][3];
extern int winning_state[8][3];


extern int row, column;
extern int p1_moves, p2_moves, current_move, current_player, current_position;
extern int winning_State_count;

struct positions {
    int pos;
    int dimension[2];
};

extern struct positions board_position[9];

#endif