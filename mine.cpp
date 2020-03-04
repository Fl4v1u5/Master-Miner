#include "mine.h"

tTile chartotile(char c) {
	tTile tile;
	switch (c) {
		case ' ': tile = FREE;
			break;
		case 'T': tile = DIRT;
			break;
		case 'J': tile = MINER;
			break;
		case 'G': tile = GEM;
			break;
		case 'S': tile = EXIT;
			break;
		case 'M': tile = WALL;
			break;
		case 'P': tile = STONE;
			break;
		default: tile = FREE;
			break;
	}
	return tile;
}

void load_Mine(ifstream& file, tMine& mine) {
	char c;
	file >> mine.nRows >> mine.nCols;
	file.get(c);
	for (int i = 0; i < mine.nRows; i++) {
		for (int j = 0; j < mine.nCols; j++) {
			file.get(c);
			mine.map[i][j] = chartotile(c);
		}
		file.get(c);
	}
}

void draw1_1(const tMine& mine) {
	system("cls");
}