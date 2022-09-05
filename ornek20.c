#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int a[10],b[10],i,j,kac=0;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<10;i++)
{
	b[j]=(a[i]+a[i+1])/2; i+=2; j++; kac++;
}

for(i=0;i<kac;i++)
printf("%d",b[i]);



	return 0;
}
