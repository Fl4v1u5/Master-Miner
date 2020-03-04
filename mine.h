#pragma once

#include <fstream>

using namespace std;

const short MAX = 50;

typedef enum tTile {FREE, DIRT, GEM, STONE, WALL, EXIT, MINER, TNT};
typedef tTile tPlane[MAX][MAX];
typedef char tCharPlane[3 * MAX][3 * MAX];
typedef int tColorsPlane[3 * MAX][3 * MAX];
typedef struct {
	tPlane map;
	short nRows, nCols;
	short posX, posY;
} tMine;

void load_Mine(ifstream& file, tMine& mine);

void draw1_1(const tMine& mine);

void draw1_3(const tMine& mine);

void draw3x3(tTile tile, tCharPlane charplane, tColorsPlane colorsPlane, short i, short j);

tTile chartotile(char c);