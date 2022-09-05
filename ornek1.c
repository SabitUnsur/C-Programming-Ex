#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i,j,X,Y,Xtoplam=0,Ytoplam=0,kontrol=1;
	printf("X girin\n\n");
	scanf("%d",&X);
	printf("Y girin\n\n");
	scanf("%d",&Y);

	if(X==0) kontrol=0; 
	else 
	  for(i=1;i<=X/2;i++)
	    if (X%i==0) Xtoplam+=i;
	    
	if(Y==0) kontrol=0; 
	else
	  for(j=1;j<=Y/2;j++)
	  	if(Y%j==0) Ytoplam+=j;
	  	
	if(Xtoplam==Y && Ytoplam==X) printf("%d ve %d dost sayilardir.",X,Y);
	else printf("%d ve %d dost sayilar degillerdir",X,Y);
	
/*	int x,y,xcarpan=0,ycarpan=0,i;
scanf("%d%d",&x,&y);
i=(x-(x%2))/2;
 while(i>0) 
 {
 if(x%i==0) 
 xcarpan=xcarpan+i;
 i--;
 }
i=1;
 while(i<y)
 {
 if(y%i==0)
 ycarpan=ycarpan+i;
 i++;
 }
if(xcarpan==y && ycarpan==x)
printf("%d ile %d arkadas sayilardir" ,x,y);
else
printf("%d ile %d arkadas degildir" ,x,y); */
	
	return 0;
}
