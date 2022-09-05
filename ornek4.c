#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i;
long carpim=1;
for(i=1;i<=25;i++)
{
carpim=pow(i,2);
printf("%d- %ld\n",i,carpim);
}

	return 0;
}
