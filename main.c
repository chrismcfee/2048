#include <tigcclib.h>

#include "board.h"


void _main(void) {
    struct board board;
        int status; // Game status.
        int valid;
        int key;
        // Print legal shenanigains.
        randomize();
        score_clear();
        ClrScr();
        FontSetSys(F_6x8);
