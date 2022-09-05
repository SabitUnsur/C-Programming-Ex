#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int asalMi(int *x)
{
  int i,asal=1;
  for(i=2;i<=sqrt((*x));i++)
  	if(((*x)%i)==0) { asal=0; break;}	  
  return (asal); 
}

int main(int argc, char *argv[]) {
	
int x,n,deger,euler;
euler=1;
for(n=2;n<=41;n++)
{  
	euler=1;
	
  for(x=0;x<=n-2;x++)
  {
  	deger=x*x+x+n;
  	
  	if(asalMi(&deger)==0) { euler=0; break; } }
  	
  if(euler==1) printf("%d euler sayisidir\n",n);
}
	return 0;
}


