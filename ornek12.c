#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int n,i=1,j=1;
float f1=1,toplam=0,f2=1;

printf("N degeri gir:\n");
scanf("%d",&n);

if(i==n) printf("Toplam : %f",toplam);

for(i=1;i<n;i++)
{
	f1*=i;
	for(j=1;j<(n-i);j++)
	{
		f2*=j;
	} 
	
	toplam+=(float)(1/f1) + (i/f2);
}

printf("Toplam : %f",toplam);

	return 0;
}
