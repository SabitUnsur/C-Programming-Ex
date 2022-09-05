#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//DELTA HESAPLAMA 
int a,b,c,x1,x2,delta=0;

printf("A degeri nedir?\n");
scanf("%d",&a);


printf("B degeri nedir?\n");
scanf("%d",&b);


printf("C degeri nedir?\n");
scanf("%d",&c);

delta=pow(b,2)-4*a*c;

if(delta<0) printf("Gercel kok yoktur!\n");
else { if(delta==0) { x1= -b+sqrt(delta)/2*a; printf("Cakisik kok vardir!\n\n %d ",x1);} 
		else{x1= -b+sqrt(delta)/2*a;  x2=-b-sqrt(delta)/2*a; printf("Iki gercel kok vardir!\n\n %d %d ",x1,x2);} }  

	return 0;
}
