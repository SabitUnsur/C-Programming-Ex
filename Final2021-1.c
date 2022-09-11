#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int rf_hesapla(int,int,float);

int main(void) {
	
int Fibonacci[12],i; 
char islem; 
float rastgele_sayi;

srand(time(NULL));

Fibonacci[0]=1; Fibonacci[1]=1;

for(i=2;i<12;i++)
{
	rastgele_sayi=(float)rand()/RAND_MAX;
	
	Fibonacci[i]=rf_hesapla(Fibonacci[i-2],Fibonacci[i-1],rastgele_sayi);
	
	if(rastgele_sayi<0.5) islem='+';
		else  islem='-';
		
  printf("Rastgele Fibonacci %3d. eleman = %3d, rastgele sayi %.2f, %3d   %c %3d \n",i+1,Fibonacci[i],rastgele_sayi,Fibonacci[i-1],islem,Fibonacci[i-2]);}
	
	return 0;
}

int rf_hesapla(int fn_1,int fn_2,float rastgele_sayi)
{
	if(rastgele_sayi<0.5) return (fn_1+fn_2);
	else return (fn_1-fn_2);
}
