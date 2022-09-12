#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,sayi;
	for(i=1;i<=9999;i++)
	{
		toplam=0;
		for(j=1;j<=i/2;j++)
			if(i%j==0)
				toplam+=j;
		if(toplam=sayi)
		printf("%4d mukemmel sayidir\n\n",sayi);
	}
	
	return 0;
}
