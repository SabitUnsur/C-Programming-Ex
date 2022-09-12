#include <stdio.h> 
#include <math.h>
void asal_carpanlar(int); 

int main(void){
 
 int sayi; 
 printf("Bir pozitif sayi giriniz -> "); 
 scanf("%d",&sayi); 
 asal_carpanlar(sayi); 
 return 0;} 
 
void asal_carpanlar(int sayi){
 int i, us=0, sinir=sayi; 
 printf("%d = ",sinir);
  
 for(i=2;i<=sinir;i++){ 
 
 if ((sayi%i)==0){ 
 us++; 
 sayi=sayi/i; 
 i--; 
 continue;} 
 
 if (us!=0) 
 printf("%d^%d ",i,us); 
 us=0;}} 

