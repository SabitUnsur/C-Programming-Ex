#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

int k,adim=0,max=0,ciftBaslangic=0;
printf("Sayi girin : \n");
 scanf("%d",&k);
 
 while(k!=1)
 {
 	if(k%2==1)
 	{
 	k=(k*3)+1;
 	adim++;
 	//ciftBaslangic=0; 
 	}
 	
 	else
 	{
	 if(ciftBaslangic<k)
 	 ciftBaslangic=k;
 	 k=k/2;
 	 adim++;	
 	}
 	
 	if(max<k)
 	{
 	max=k;
 	}
 }
printf("maks:%d ,islem :%d ,soncift :%d",max,adim,ciftBaslangic); 
	
	return 0;
}


