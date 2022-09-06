#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int i,j,k=1,deger;

printf("1-9 arasinda bir deger giriniz");
scanf("%d",&deger);
 int an=i;

if(k%2==1)
{
	for(i=deger;i>0;i--)
	{
		for(j=deger;j>=i;j--)
		{
			printf("%d",j); 
		} 
		
		an=i;
		k++; 
		
		printf("\n");
		
	    if(k%2==0)
 		{
		    for(j=an;j<=deger;j++)
	     	{
				printf("%d",j);
				
		    }
			 k++; 
		    printf("\n");
		    
		}
	}
}
	return 0;
}




  	


