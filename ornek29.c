#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//void x2(int *,int *);

float topla (float apar[])
{
	int i;
	float toplam=0.0;
	for(i=0;i<4;i++)
	{
		toplam+=apar[i];
	}

	return (toplam);
}

float toplam2(float *ptr)
{
	int i;
	float toplam2=0.0;
	for(i=0;i<4;ptr++,i++)
	{
		toplam2+=*ptr;			
	}
	
	return (toplam2);
}



int main(int argc, char *argv[]) {
	
//POINTER DIZI ORNEGI

float a[4]={1.0,2.0,3.0,4.0};
//float *apt;
//apt=a;
printf("Toplam :  %f",toplam2(a));
//printf("toplam : %f",toplam2(a));















/*
double a[]={3.9,2.4,7.7,1.1};
double *p;
p=a;

printf("%f\n",*(a+1));
printf("%f\n",a[0]);	
printf("%f\n",*(p+1));
printf("%f\n",p[0]);
printf("%f\n",p[1]);
printf("%f\n",a[1]);
*/


	return 0;
}


