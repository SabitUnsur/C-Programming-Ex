#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int n=5;
int d[5];
int i;
for(i=0;i<n;i++)
 {
 	scanf("%d",&d[i]);
 	if((n-1)!=i) scanf("%d",&d[n-1]); n--;
 }
 	
 n=5;
for(i=0;i<n;i++)
 {
	 printf("%3d",d[i]);
 }
	return 0;
}
