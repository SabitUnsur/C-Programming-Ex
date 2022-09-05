#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int fibonacciRecursive(int);

	// A L G O R I T M A S I //
	
/* 	
1. int fibonacci[11],i tanýmla 
2. float rastgelesayi, char islem tanýmla.
3. fibonacci[0] ve fibonacci[1]=1 yap.
4.  i=2 den 12 oluncaya dek  rastgele sayi uret , rastgeleSayi degiskenine ata 
5. eger rastgele sayi<0.5 ise islem degerini + yap. deðilse - yap
5. rf_hesapla fonksiyonuna fibonacci[i-1],fibonacci[i-2] ve rastgeleSayi degiskenini gonder
6. rf_hesapla icinde eger rastgeleSayi<0.5 ise fn_1+fn_2 döndür, deðilse fn_1-fn_2 döndür.
7. fibonacci[i] degerini rf_hesapladan dönen degere esitle.
8. Yazdýr. 
*/

//int rf_hesapla(int,int,float);
int main(int argc, char *argv[]) {
	
	int sayac,f=1,sayi;
	printf("")
	
	
	
	
	

/*	
	int fibonacci[11],i;
	float rastgeleSayi;
	char islem;
	fibonacci[0]=1;
	fibonacci[1]=1;
	srand(time(NULL));
	
	for(i=2;i<12;i++){
		
	 rastgeleSayi=(float)rand()/RAND_MAX;
		
	 fibonacci[i]=rf_hesapla(fibonacci[i-1],fibonacci[i-2],rastgeleSayi);
	 
	 if (rastgeleSayi<0.5){
	 	
			islem='+';
		}
		else{
			
			islem='-';
		}
		
	 printf("Rastgele Fibonacci %3d. eleman = %3d, rasgele sayi %.2f, %3d  %c %3d \n",i+1,fibonacci[i],rastgeleSayi,fibonacci[i-1],islem,fibonacci[i-2]);} */
			
	return 0;}


	int rf_hesapla(int fn_1,int fn_2,float rastgele_sayi)
	{
		if(rastgele_sayi<0.5)
		{
			return (fn_1+fn_2);
		}
		
		else
		{	
			return (fn_1-fn_2);
		}
	}

/*
	srand(time(NULL));
	int f[11],i;
	float rastgele_sayi;
	char islem;
	f[0]=1;
	f[1]=1;
	
	for(i=2;i<12;i++){
		rastgele_sayi=(float) rand()/RAND_MAX;
		f[i]=rf_hesapla(f[i-1],f[i-2],rastgele_sayi);
		if (rastgele_sayi<0.5){
			islem='+';
		}
		else{
			islem='-';
		}
		  printf("Rasgele Fibonacci %3d. eleman = %3d, rasgele sayi %.2f, %3d   %c %3d \n",i+1,f[i],rastgele_sayi,f[i-1],islem,f[i-2]);}*/

	
/*
int rf_hesapla(int fn_1,int fn_2,float rastgele_sayi){
	
	if (rastgele_sayi<0.5){
		return(fn_1+fn_2);
	}
	
	else{
		return (fn_1-fn_2);
	}
}


	/*
	int i,ustLimit;
	puts("Lutfen seri icin bir ust limit giriniz");
	scanf("%d",&ustLimit);
	
	for(i=0;i<ustLimit;i++){
		printf("%d",fibonacciRecursive(i));
	}

	

int fibonacciRecursive(int sayi)
{
	if(sayi==0 || sayi==1){
		return sayi;
	}
	else{
		return fibonacciRecursive(sayi-1)+fibonacciRecursive(sayi-2);
	}
}	
		//ARMSTRONG SAYÝSÝ // 
	//Basamaklarindaki sayilarýn kupleri toplamý kendine esit olan sayilardir
	
/*	int basamak,sayi,gecici,j,toplam=0;
	
	printf("Sorgu sayisi nedir?\n\n");
	scanf("%d",&sayi);
	
	gecici=sayi;
	
	while(gecici!=0)
	{
		basamak=gecici%10;
		toplam+=pow(basamak,3);
		gecici/=10;
	}
	
	if(toplam==sayi){
		printf("%d sayisi armstrong sayisidir",sayi);
	}
	
	else{
		printf("%d sayisi armstrong sayisi degildir",sayi);
	}*/
	
	
	// MUKEMMEL SAYÝ // 
	/*
	int sayi,j,toplam=0,i;
	for(i=1;i<100;i++)
	{
		toplam=0;
		
		for(j=1;j<i;j++)
		{
			
			if(i%j==0)
			{
				
				toplam+=j;
			}
				
			if(toplam==i)
			{
		
				printf("%d sayisi mukemmel sayidir\n",i);
			}		
		}		
	}	
	*/

