#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 int d[10],i,x=0,enk;
 scanf("%d",&d[0]);
 enk=d[0];
 for(i=1;i<3;i++)
 {
	 scanf("%d",&d[i]);
 	if(enk>d[i])
 	{
 	enk=d[i];
 	x=i+1;
	 }
 }
printf("En kücük eleman %d.sirada",x);
	return 0;
}
