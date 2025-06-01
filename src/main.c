#include <stdio.h>

#include "console.h"
#include "objects.h"

int main(void){
	draw_box(8,8,10);
	struct ball b;
	init_ball(&b, 12, 12, 0, 0);
	draw_ball(&b);
	return 0;
}
