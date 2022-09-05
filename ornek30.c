#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Fibonacci(int n)
{
if(n==0) return 0;
else if(n==1) return 1;
else 
return (Fibonacci(n-2)+Fibonacci(n-1));	
}

int main(int argc, char *argv[]) {
	
int i,n;
printf("kac tane fibonacci degeri hesaplanacak?\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	printf("%d. deger = %d\n",i,Fibonacci(i));
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
