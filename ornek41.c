#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int AsalMi(int *ptr)
{
	int i,sayac=0;
	for(i=2;i<5;i++)
		if((*(ptr)%i)==0) sayac++;
	if(sayac==0) return 1;
}

int main(int argc, char *argv[]) {
		
int dizi[5]={3,4,5,7,2},i,*ptr;

ptr=dizi;

for(i=0;i<5;i++)
{
	if(AsalMi(&dizi[i])==1)	printf("%d asaldir\n",dizi[i]);
	
}



	return 0;
}
