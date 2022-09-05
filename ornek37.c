#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int deger,i,j;	
printf("1-9 arasinda bir deger giriniz\n");
scanf("%d",&deger);
printf("\n");

for(i=deger;i>0;i--)
{ 
	for(j=deger;j>=i;j--)
	{
		printf("%d",j);
		
	}
	printf("\n");	
} 	
	return 0;
}
