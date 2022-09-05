#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matris1[2][2]={1,2,3,4},matris2[2][2]={3,5,7,8},carpimMatris[2][2];
	int i,j,k,toplam=0;
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
			    toplam+= matris1[i][k] * matris2 [k][j] ;	   
			}
		    carpimMatris[i][j]=toplam;
			toplam=0; 
		}
	}

	printf("CARPIM MATRIS\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			printf("%d\t",carpimMatris[i][j]);		
		}	
			printf("\n\n");
	}
	
	
	
	return 0;
}
