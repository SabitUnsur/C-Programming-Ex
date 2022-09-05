#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int matris[2][2],i,j,transpoze[2][2];

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("[%d][%d] : ",i,j);
		printf("\n");
		scanf("%d%d",matris[i][j]);
	}
}

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		transpoze[i][j]=matris[j][i];
		
		printf("[%d][%d] : ",transpoze[i][j]);
		printf("\n");

	}
}





	return 0;
}
