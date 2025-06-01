#include <stdio.h>
#include "console.h"

void gotoxy(int x, int y){
	printf("\033[%d;%dH", y, x);
}

void clrscr(){
	printf("\033[2J");
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

void draw_box(int x_corner, int y_corner, int sidelength){
	for(int i = x_corner; i <= x_corner + sidelength; i++){
		gotoxy(i, y_corner);
		printf("M");
		gotoxy(i, y_corner+sidelength);
		printf("M");

		gotoxy(x_corner, i);
		printf("M");
		gotoxy(x_corner+sidelength, i);
		printf("M");
	}
}
