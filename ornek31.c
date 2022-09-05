#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int asal_kontrol(int n)
{
	int i,sayac=0;
	for(i=2;i<=n-1;i++)
		if(n%i==0) sayac++;
	if(sayac==0) return 1;
}

int main(int argc, char *argv[]) {

int i; //sinir;
/*
printf("Asallik kontrol siniri?\n");
scanf("%d",&sinir);
*/
for(i=2;i<100;i++)
{
	if(asal_kontrol(i)==1) printf("%3d asaldir\n",i);
}

	return 0;
}
