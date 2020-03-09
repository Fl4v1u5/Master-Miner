#pragma once

#include "mine.h"

typedef enum tKey {UP, DOWN, LEFT, RIGHT, EXIT, NOTHING, TNT};
typedef struct {
	tMine mine;
	short gems, movs, TNT;
} tGame;

bool load_game(tGame & game, int level);

bool inputEventAction(tGame & game, tKey key);

void draw(const tGame & game);