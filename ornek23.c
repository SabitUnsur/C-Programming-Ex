#include <stdio.h>
#include <stdlib.h>
#define satir 2
#define sutun 2

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int ikiBoyutluMatris[satir][sutun],tekBoyutluMatris[satir*sutun],i,j,k=0;

for(i=0;i<satir;i++)
{
	for(j=0;j<sutun;j++)
	{
		scanf("%d",&ikiBoyutluMatris[i][j]);
	}
}

for (i = 0; i < satir; i++)
 {
 for (j = 0; j < sutun; j++)
 {
	tekBoyutluMatris[k] = ikiBoyutluMatris[i][j];
 	k++;
 }
}

for(i=0;i<satir*sutun;i++)
{
	printf("[%d]: %d",i,tekBoyutluMatris[i]);
}






	return 0;
}
