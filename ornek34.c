#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//SELECTION SORT //
void yer_degistir(int *,int *);
void sirala(int [],int );

int main(int argc, char *argv[]) {
int dizi[6]={2,6,1,4,3,5},i;


for(i=0;i<6;i++)
{  
	printf("%3d \t",dizi[i]);
}

printf("\n\n\n");
printf("SIRALAMA ADIMLARI\n\n");
for(i=0;i<6;i++)
{ 
	sirala(dizi,6);
	
	printf("%3d \t",dizi[i]);
}
	return 0;
}

void yer_degistir(int *sayi1,int *sayi2)
{
	int temp=*sayi1;
	*sayi1=*sayi2;
	*sayi2=temp;
}


void sirala(int dizi[],int boyut)
{
	int min,i,j;
	for(i=0;i<boyut;i++)
	{ 
		min=i;
		
		for(j=i+1;j<boyut;j++)
		{
			if(dizi[j]<dizi[min]) yer_degistir(&dizi[min],&dizi[j]);
		}
		
	}
}
