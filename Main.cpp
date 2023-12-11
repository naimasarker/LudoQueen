#include <stdio.h>
#include <graphics.h>
#include "header.h"

int main(){

	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");

    char arr[7];

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(5, 5, 15);
	rectangle(45, 45, 610, 460);
	rectangle(35,35,620,470);


    greenCorner();
    yellowCorner();
    redCorner();
    blueCorner();

    lineYellowBlue();
    lineRedBlue();
    lineGreenYellow();
    lineRedGreen();


    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(40, 40, 15);

    home();


    game();



	getch();
	closegraph();

	return 0;
}

