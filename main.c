#include "Includes.h"

int main()
{
	const uint scale = 20;
	const Length gridlen = {40, 30};
	const Length window = coordMul(gridlen, scale);
	init(window);

	while(1){
		Ticks frameStart = getTicks();
		clear();


		draw();
		events(frameStart + TPF);
	}
	return 0;
}
