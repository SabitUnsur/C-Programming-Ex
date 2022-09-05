#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i,j=0;
char kelime[10],harf[10];
printf("Kelime: ");
gets(kelime);

int uzunluk=strlen(kelime);

for(i=uzunluk-1;i>=0;i--)
{
  harf[j]=kelime[i];
  j++;
}

int a=0;
for(i=0;i<uzunluk;i++)
{
 if(harf[a]==kelime[i])
 {
   a++;
 }
}
 if(a==uzunluk)
 printf("Kelime Palindromiktir");
 else
 printf("Kelime Palindromik Deðildir");


	return 0;
}
