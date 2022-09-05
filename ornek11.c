#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x,us,n,k=2,fak=2;
	float toplam=1;
	printf("X degeri:\n");
	scanf("%d",&x);
	
	printf("N degeri:\n");
	scanf("%d",&n);
	
	for(k=2;k<x;k++)
	{
		for(us=2;us<=n;us++)
		{	
			if(k%2==1)
			{
				toplam-=pow(x,us)/fak;
				if(fak%2==0) fak*=k;
				//else fak=2;
			}
			
			else
			{
				toplam+=pow(x,us)/fak;
				fak*=us;
			}	
		}	
   }	
	printf("Toplam : %f",toplam);		
	return 0;
}
	
