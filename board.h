#ifndef board_H
#define board_H

#include <tigcclib.h>

#define BOARD_COLUMNS 4
#define BOARD_ROWS 4
#define BOARD_4SPAWN_CHANCE 15

extern unsigned int score = 0;
struct board {
	// Holds the value of each tile.
	unsigned tiles[BOARD_ROWS][BOARD_COLUMNS];
};


/**
 * Returns 0 if the game is not over; >0 if the game is over and the user
 * has won, or <0 if the user has lost.
 */
int board_done(struct board* board);
unsigned board_get_tiles_empty(struct board* board);

//init initializes board
//merge merges tiles in the board in a specific direction
//move processes the move request and evaluates; 
//plop spawns a new tile
//shift shifts the tiles in a certain direction
//print is the function to show the board itself

void board_init(struct board* board);
int board_merge_down(struct board* board);
int board_merge_left(struct board* board);
int board_merge_right(struct board* board);
int board_merge_up(struct board* board);
int board_move_down(struct board* board);
int board_move_left(struct board* board);
int board_move_right(struct board* board);
int board_move_up(struct board* board);
void board_plop(struct board* board);
void board_print(struct board* board);
int board_shift_down(struct board* board);
int board_shift_left(struct board* board);
int board_shift_right(struct board* board);
int board_shift_up(struct board* board);

void score_clear();

#endif // board_H
