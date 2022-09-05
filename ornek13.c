#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

 int x,n,i,j,fak;
 float t=0.0;
 
 scanf("%d",&x);
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
 	fak=1; 	
 	
	 for(j=1;j<=2*i;j++)
	  
	  fak=fak*j; t=t+pow(-1,i)*pow(x,(2*i))/fak;
 }
	

printf("Toplam : %f",t);

	return 0;
}
