#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
    int satir = 7;
    for(i = 0; i <= satir; i++)
    {
        for( j = 0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
        //adet++;
    }
	return 0;
}
