#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int matris[2][3],i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("[%d] [%d] : \n",i,j);
		scanf("%d%d",&matris[i][j]);
	}
}
	return 0;
}
