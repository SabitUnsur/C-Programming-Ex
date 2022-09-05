#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//BUBBLE SORT // 

void yer_degistir(int *,int *); 
void sirala(int [],int);

int main(int argc, char *argv[]) {

int i,a[10]={1,2,5,6,4,0,9,3,2,-5};
sirala(a,10);
for(i=0;i<10;i++)
printf("%2d \t",a[i]);
	return 0;
}

void yer_degistir(int *z1,int *z2)
{
	int temp=*z2;
	*z2=*z1;
	*z1=temp;
}

void sirala(int dizi[],int boyut)
{
	int i,j;
	for(i=0;i<boyut;i++)
	{
		for(j=i+1;j<boyut;j++)
		{
			if(dizi[i]>dizi[j]) yer_degistir(&dizi[i],&dizi[j]);
		}
	}	
}
