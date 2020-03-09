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

char tiletochar(tTile t) {
	char c;
	switch (t) {
		case FREE: c = ' ';
			bgroundColor(4);
			break;
		case WALL: c = '#';
			bgroundColor(4);
			break;
		case STONE: c = '@';
			bgroundColor(4);
			break;
		case GEM: c = '*';
			bgroundColor(5);
			break;
		case MINER: c = 'X';
			bgroundColor(1);
			break;
		case DIRT: c = '.';
			bgroundColor(4);
			break;
		case EXIT: c = 'E';
			bgroundColor(2);
			break;
		default: c = '.';
			bgroundColor(4);
			break;
	}
	return c;
}

void load_mine(ifstream& file, tMine& mine) {
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

	for (int i = 0; i < mine.nRows; i++) {
		for (int j = 0; j < mine.nCols; j++) {
			cout << tiletochar(mine.map[i][j]);
		}
		cout << endl;
	}
	bgroundColor(0);
}

void bgroundColor(int color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 15 | (color << 4));
}