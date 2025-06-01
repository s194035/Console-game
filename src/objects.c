#include <stdio.h>
#include "objects.h"
#include "console.h"

void init_ball(struct ball* b, int x, int y, int vx, int vy){
	b->x = x;
	b->y = y;
	b->vx = vx;
	b->vy = vy;
}

void draw_ball(struct ball* b){
	gotoxy(b->x, b->y);
	printf("o");
}

void update_ball_pos(struct ball* b){
	b->x += b->vx;
	b->y += b->vy;
}

int check_ball_collision(struct ball* b, int xmin, int xmax, int ymin, int ymax){
	int collisions = 0;
	if(b->x <= xmin+1 || b->x >= xmax-1){
		b->vx = -b->vx;
		collisions++;
	}
	if(b->y <= ymin-1 || b->y >= ymax+1){
		b->vy = -b->vy;
		collisions++;
	}
	return collisions;
}
