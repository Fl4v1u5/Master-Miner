#include "game.h"

bool load_game(tGame & game, int level) {
	ifstream file;
	string name = " .txt";
	name[0] = '0' + level;
	tMine mine;
	load_mine(file, mine);
	game.gems = 0;
	game.movs = 0;
	game.TNT = 0;
}