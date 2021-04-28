#include "Includes.h"

typedef enum{EMPTY, SNAKE, APPLE}Cell;

void drawCell(int x, int y, int scale)
{

}

int main()
{
	const int scale = 20;
	const Length gridlen = {40, 30};
	const Length window = coordMul(gridlen, scale);
	init(window);
	Cell grid[gridlen.x][gridlen.y];

	printf("%i, %i\n", gridlen.x, gridlen.y);

	while(1){
		Ticks frameStart = getTicks();
		clear();



		draw();
		events(frameStart + TPF);
	}
	return 0;
}
