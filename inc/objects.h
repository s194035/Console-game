#ifndef INCLUDE_OBJECTS_H
#define INCLUDE_OBJECTS_H

struct ball{
	int x;
	int y;
	int vx;
	int vy;
};

void init_ball(struct ball*, int, int, int, int);
void draw_ball(struct ball*);
void update_ball(struct ball*);
int check_ball_collision(struct ball*, int, int, int, int);
#endif /*INCLUDE_OBJECTS_H */
