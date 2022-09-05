#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char cumle[100],ch;
	int i,n=100,sayac=0;
	printf("Cumle girin\n");
	gets(cumle);
	
	printf("hangi karakteri ariyorsunuz?\n");
	scanf("%c",&ch);
	
	for(i=0;i<n;i++)
	{
		if(cumle[i]=='\0') break;
		if(cumle[i]==ch) sayac++;
	}
	
	printf("%c cumle icinde %d defa vardir",ch,sayac);
	
	return 0;
}
