#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int sayi,i=2,toplam1=0,toplam2=0,x;
printf("sayi giriniz\n");
scanf("%d",&sayi);
x=sayi;


 //ASAL OLMAYAN SAYI RAKAMLARI TOPLAMI
if(x%i!=0 && x%3!=0 && x%5!=0 && x%7!=0 )
{
	toplam1+=sayi%10; 
	sayi=sayi/10;
	if(sayi<10) toplam1+=sayi; 
}

 //ASAL CARPANLAR TOPLAMI
for(i=2;x>1;i++)
{
	while(x%i==0)
	{
		if((i==2 || i==3 || i==5 || i==7)) 	
		{	
			toplam2=toplam2+i; 
			x=x/i;
		}		
	}	
}

if(toplam1==toplam2) printf("%d bir smith sayisidir\n",x);
else printf("%d bir smith sayisi degildir",x);

return 0;
}
