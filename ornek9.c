#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,n,fak=1,toplam=0,i=1,j=1;
	printf("X:\n");
	scanf("%d",&x);
	printf("N:\n");
	scanf("%d",&n);
	
	if(x==0) printf("Toplam :%d\n",toplam);
	if(n==0) printf("Toplam: %d\n",x+1);
	
	toplam+=pow(x,i)/fak;
	
	for(i=2;i<=n;i++)
	{
		fak*=i;
		toplam+= pow(x,i)/fak;
		printf("Toplam : %d\n",toplam);
	} 	
	return 0;
}
