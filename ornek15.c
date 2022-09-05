#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int d[8],sayi,i=0;

printf("sayi gir");

scanf("%d",&sayi);

for(i=0;i<8;i++)
{
	d[i]=sayi%2;
	sayi/=2;
	
	if(sayi<2)
	{
		d[i]=sayi;
		break;
	}
}

while(i>=0)
{
	printf("%4d",d[i]);
	i--;
}
	return 0;
}
