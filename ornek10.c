#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int n,k=1;
float i=3,toplam=1;	

printf("n degeri nedir?\n");
scanf("%d",&n);

if(n==0) printf("yanlis giris");
if(n==1) printf("Toplam : %f",toplam);

	for(k=1;k<n;k++)
	{
		if(k%2==1) {toplam=toplam-1/i; i+=2; } 
		else { toplam = toplam+1/i; i+=2;	}
	
	}
	printf("Toplam : %f\n",toplam);


	return 0;
}
