#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int yil_1,ay_1,gun_1,yil_2,ay_2,gun_2;
	printf("Bugunun tarihini giriniz:(gun - ay - yil)\n");
	scanf("%d %d %d",&gun_1,&ay_1,&yil_1);
	printf("Dogum tarihinizi giriniz:(gun - ay - yil)\n");
	scanf("%d %d %d",&gun_2,&ay_2,&yil_2);
	
	if(ay_1<ay_2)
	{
		yil_1-=1;
		ay_1+=12;
	}
	
	if(gun_1<gun_2)
	{
		ay_1-=1;
		gun_1+=30;
	}
	
	printf("Yasiniz:\n%d yil - %d ay - %d gun\n",(yil_1-yil_2),(ay_1-ay_2),(gun_1-gun_2));
	
	return 0;
}
