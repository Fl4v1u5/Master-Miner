#include <iostream>
#include "mine.h"

int main() {
	ifstream file("1.txt");
	tMine mine;
	load_mine(file, mine);
	draw1_1(mine);

	return 0;
}