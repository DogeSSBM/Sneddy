#include "Includes.h"

int main(int argc, char const *argv[])
{
	const Length window = {800, 600};
	init(window);

	while(1){
		Ticks frameStart = getTicks();
		clear();

		drawTextCentered(400, 300, "My cock is massive!!!1!!");

		draw();
		events(frameStart + TPF);
	}
	return 0;
}
