#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//KOSEGEN TOPLAMI
	
int n, i, j, toplam;
    toplam =0;
int mat[10][10];

printf("Matrisin boyutunu giriniz : ");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {               
     printf("%d. satir ,%d.sutun elemani : ",i,j);

     scanf("%d",&mat[i][j]);
    }
 }

for(i=1;i<=n;i++)
toplam=toplam+mat[i][i];
printf("Toplam : %d",toplam);


	return 0;
}
