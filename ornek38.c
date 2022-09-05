#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ASAL CARPAN //
int main(void){ 
 int us=0,sayi, degerler,i;
 printf("Bir sayi degeri giriniz...\n");
 scanf("%d",&sayi);
 for(i=2;sayi>=2;i++)
 {
  while(sayi%i==0)
  {
	us++;  
   printf("%d\t",i);
   sayi=sayi/i;
  }
 }
 return 0;} 

