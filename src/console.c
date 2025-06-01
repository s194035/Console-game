#include <stdio.h>
#include "console.h"

void gotoxy(int x, int y){
	printf("\033[%d;%dH", x, y);
}

void bg_color(int color){
	switch(color){
		case BLACK:
			printf("\033[40m");
			break;
		case RED:
			printf("\033[41m");
			break;
		case GREEN:
			printf("\033[42m");
			break;
		case YELLOW:
			printf("\033[43m");
			break;
		case BLUE:
			printf("\033[44m");
			break;
		case MAGENTA:
			printf("\033[45m");
			break;
		case CYAN:
			printf("\033[46m");
			break;
		case WHITE:
			printf("\033[47m");
			break;
	}
}
