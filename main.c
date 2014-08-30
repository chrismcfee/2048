#include <tigcclib.h>
#include "board.h"

/*
 Copyright 2014 by Christopher J. McFee
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

void _main(void) {
	struct board board;
	int status; // Game status.
	int valid;
	int key;
	randomize();
	score_clear();
	ClrScr();
	FontSetSys(F_6x8);
	ngetchx();
	ClrScr();
	// Set up board.
	board_init(&board);
	DrawStr(134, 8, "Arrows move.", A_XOR);
	DrawStr(134, 18, "ESC exits", A_XOR);
	DrawStr(134, 28, "Your Score:", A_XOR);
	//Play the game.
	while (!(status = board_done(&board))) {
		// Print the board.
		board_print(&board);

		// Get the player's move.
		valid = 0;
		key = ngetchx();
		board_print(&board);
		if (key == KEY_UP) {
			valid = board_move_up(&board);
		} else if (key == KEY_DOWN) {
			valid = board_move_down(&board);
		} else if (key == KEY_LEFT) {
			valid = board_move_left(&board);
		} else if (key == KEY_RIGHT) {
			valid = board_move_right(&board);
		} else if (key == KEY_ESC) {
			return 0;	
		}

		// Prepare for user's next move.
		if (valid) {
			board_plop(&board);
		} else {
			DlgMessage("Error", "Invalid move.", BT_OK, BT_NONE);
		}
	}
	
	// Print the final board.

	board_print(&board);
		if (status < 0) {
		DlgMessage("Game over", "You lose!", BT_OK, BT_NONE);
	} else {
		DlgMessage("Game over", "You win!", BT_OK, BT_NONE);
	}
	ngetchx();
}
