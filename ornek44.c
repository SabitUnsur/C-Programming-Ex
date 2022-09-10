#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct noktalar{
	int x,y;
};

struct noktalar oku(void)
{
	struct noktalar deger;
	printf("Nokta degerlerini giriniz");
	scanf("%d%d",&deger.x,&deger.y);
	return (deger);
}

float mesafe_hesapla(struct noktalar *a,struct noktalar *b)
{
	float m1= pow((a->x - b->x),2);
	float m2= pow((a->y - b->y),2);
	
	return (sqrt(m1+m2));		
}

int main(int argc, char *argv[]) {
	
struct noktalar n1,n2;

float mesafe;

n1=oku();
n2=oku();

mesafe= mesafe_hesapla(&n1,&n2);
printf("%f",mesafe);

	return 0;
}
