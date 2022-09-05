#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
int i,x,n,sonuc=1,f=1;
printf("x ve n degeri girin\n");
printf("x:\n");
scanf("%d",&x);
printf("n:\n");
scanf("%d",&n);

if(n==0) { printf("Sonuc : %d ",sonuc); }

else
{

for(i=1;i<=n+1;i++)
{
	f*=i;
	sonuc+=pow(x,i)/f;
}
printf("Sonuc : %d",sonuc);
}

	return 0;
}
