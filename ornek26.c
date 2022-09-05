#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int n,i,j;
int toplam=0;
printf("N Degerini Giriniz:");
scanf("%d",&n);
int N = n;
int sayac=0;
int dizi[n][n]; 

for( i=0;i<n;i++)
{
	for( j=0;j<n;j++)
	{
		printf("%d.Degeri Giriniz:",++sayac);
		scanf("%d",&dizi[i][j]);
	}
	toplam += dizi[i][--N];  
}
printf("\n\n");
for(i=0;i<n;i++)
{
	for( j=0;j<n;j++)
	{
		printf("%d\t",dizi[i][j]);
	}
	printf("\n\n\n");
}
printf("\n\n");

printf("Ters Kosegen Toplamlari:%d",toplam);

	return 0;
}
