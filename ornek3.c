#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i,toplam=0,sayi;
printf("sayi girin\n");
scanf("%d",&sayi);

for(i=1;i<=sayi/2;i++) if(sayi%i==0) toplam+=i;

if(toplam==sayi) printf("%d mukemmel bir sayidir",sayi);
else printf("%d mukemmel bir sayi degildir",sayi);



	return 0;
}
