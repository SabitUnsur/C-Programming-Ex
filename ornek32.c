#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void DiziFonksiyonu(int dizi[],int boyut,float *ortalama,int *toplam)
{
	int i;
	for(i=0;i<boyut;i++){
		*(toplam)+=dizi[i];}
	*(ortalama)=(float) *(toplam)/boyut;
}

int main(int argc, char *argv[]) {
	
	int n=10,toplam=0,dizi[]={5,-2,0,8,8,3,-10,-30,200,-100};
	float ortalama=0;
	
	int *apt;
	float *bpt;
	
	apt=&toplam;
	bpt=&ortalama;
	
	DiziFonksiyonu(dizi,n,bpt,apt);
	
	printf("Toplam : %d\n",toplam);
	printf("Ortalama : %.2f",ortalama);	
	
	return 0;
}
