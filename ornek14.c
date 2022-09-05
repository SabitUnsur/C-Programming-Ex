#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i; 
       char str[100]; 
       printf("Kelimeyi giriniz: "); 
       gets(str); 
       while(str[i]!='\0') i++;
       for(; i>=0; i--) { 
            printf("%c",str[i]); 
       } 
	
	return 0;
}
