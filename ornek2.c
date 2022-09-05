#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {



int sayi1=1,sayi2=1,sayi3,sayac;
 printf("%d ",sayi1);
 printf("%d ",sayi2);
 
 for(sayac=2;sayac<=11;sayac++){
 sayi3=sayi1+sayi2;
   printf("%d ",sayi3);
   sayi1=sayi2;
   sayi2=sayi3; 
 }  
	return 0;
}
