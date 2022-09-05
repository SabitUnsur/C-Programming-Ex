#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int i,j,matris[3][3],diagonalCarpim=1;

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("[%d] [%d] : \n",i,j);
		scanf("%d",&matris[i][j]);
	}
}

for(i=0;i<3;i++)
{
 diagonalCarpim*=matris[i][i];
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",matris[i][j]);	
	}	
	printf("\n\n");
}

printf("Diagonal Carpim : %d",diagonalCarpim);
	
return 0;

}
