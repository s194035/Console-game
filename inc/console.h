#ifndef INCLUDE_CONSOLE_H
#define INCLUDE_CONSOLE_H

#define BLACK		1
#define RED			2
#define GREEN		3
#define YELLOW		4
#define BLUE		5
#define MAGENTA		6
#define CYAN 		7
#define WHITE 		8


void gotoxy(int, int);
void bg_color(int);
void clrscr();
void draw_box(int, int, int);
#endif /*INCLUDE_CONSOLE_H */
