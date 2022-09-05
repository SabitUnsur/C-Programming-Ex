#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int faktoriyel(int k) 
{
	int i,f=1;
	for(i=1;i<=k;i++)
	{
		f=f*i;
	}
	return (f);
}

int kombinasyon(int n,int r)
{   int sonuc;
	sonuc=faktoriyel(n)/(faktoriyel(r) * faktoriyel (n-r));
	printf("%d\n",sonuc);
	return (sonuc);
}

int main(int argc, char *argv[]) {

int a[3]={3,6,8},b[3]={2,4,6};
int i,n,r;

for(i=0;i<3;i++)
{
	if(a[i]>=b[i])
	{
	   n=a[i];
	  r=b[i];
      kombinasyon(n,r);
	} 
}








	return 0;
}
