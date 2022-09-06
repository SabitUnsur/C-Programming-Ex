#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	 int x,n,i,j,fak=1;
 float t;
 scanf("%d%d",&x,&n);
 
 t=1;
 for(i=1;n-1;i++)
 {
   fak=1;
   for(j=1;j<=2*i;i++)
    fak=fak*j;
     t=t+pow(-1,i)*pow(x,(2*i))/fak;
 }

printf("%f",t);	
	return 0;
}
	
