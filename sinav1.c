#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int sonuc,i,j,n=2,deger,asal=1;

printf("1-8191 arasinda deger\n");
scanf("%d",&deger);

if(deger<1 || deger> 8191) {printf("hatali giris");}	

sonuc=pow(2,n);

for(i=0;i<=sqrt(sonuc);i++)
{
	if(sonuc%i!=0) 
	{
		sonuc=pow(2,n);
		n++;	
		if(sonuc==deger) asal=1;
		else asal=0;
	}
	
}

if(asal==1) printf("Mersenne asalidir",deger);
if(asal==0) printf("mersenne asali degildir",deger);
	
	
	
	
	
	
	
	
	return 0;
}
