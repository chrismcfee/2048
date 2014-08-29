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

/**
 * Returns the number of empty tiles in the board.
 */
unsigned board_get_tiles_empty(struct board* board);

void board_init(struct board* board);

int board_merge_down(struct board* board);

int board_merge_left(struct board* board);

int board_merge_right(struct board* board);

int board_merge_up(struct board* board);

int board_move_down(struct board* board);

int board_move_left(struct board* board);

int board_move_right(struct board* board);

int board_move_up(struct board* board);

/**
 * Spawn a new tile on the board.
 *
 * I didn't know what to call this, so "plopping" a value on the board sounds
 * legit enough.
 */
void board_plop(struct board* board);

/**
 * Print the board to 'stdout'.
 */
void board_print(struct board* board);

/**
 * Shift all the elements in the board down.
 */
int board_shift_down(struct board* board);

/**
 * Shift all the elements in the board left.
 */
int board_shift_left(struct board* board);

/**
 * Shift all the elements in the board right.
 */
int board_shift_right(struct board* board);

/**
 * Shift all the elements in the board up.
 */
int board_shift_up(struct board* board);

void score_clear();

#endif // board_H
