#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ASAL CARPAN //
int main(void){ 

 int us=0,sayi, sinir,i;
 printf("Bir sayi degeri giriniz...\n");
 scanf("%d",&sayi);
 sinir=sayi;
 
 for(i=2;i<=sinir;i++)
 {
  if ((sayi%i)==0){ 
 us++; 
 sayi=sayi/i; 
 i--; 
 continue;} 
 
 if (us!=0) 
 printf("%d^%d ",i,us); 
 us=0;}
 

 
 
 return 0;} 

