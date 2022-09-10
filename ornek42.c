#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

struct points{
	int x,y;
}; 
struct points n1,n2;

float distance=0.0;

printf("What are the start points of distance?\n");
scanf("%d%d",&n1.x,&n1.y);

printf("What are the ending points of distance?\n");
scanf("%d%d",&n2.x,&n2.y);

distance = sqrt(pow((n1.x-n2.x),2) + pow((n1.y-n2.y),2));

printf("The Distance is %.2f",distance);

	return 0;
}



