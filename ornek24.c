#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int matris1[3][3]={0,1,2,3,6,7,8,9,6},matris2[3][3]={2,5,7,8,3,6,7,9,10},sonucMatris[3][3],i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		sonucMatris[i][j]=matris1[i][j] + matris2[i][j];
	}
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("[%d] [%d] : %3d %2d\n",i,j,sonucMatris[i][j]);
	}
}
	return 0;
}
