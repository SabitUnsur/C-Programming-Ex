#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int yasAy,yasYil,yasGun,ay,yil,gun,dogumAy,dogumYil,dogumGun;
printf("suanki gun\n");
printf("suanki ay\n");
printf("suanki yil\n");
scanf("%d",&gun);
scanf("%d",&ay);
scanf("%d",&yil);

printf("dogum gun\n");
printf("dogum ay\n");
printf("dogum yil\n");
scanf("%d",&dogumGun);
scanf("%d",&dogumAy);
scanf("%d",&dogumYil);
	
	
if(dogumGun>gun) gun+=30; ay=ay-1; yasGun=gun-dogumGun;
if(dogumAy>ay) ay+=12; yil=yil-1; yasAy= ay-dogumAy;
if(dogumGun<gun) gun-=30; ay+=1; yasGun=dogumGun-gun;
if(dogumAy<ay) ay-=12; yil+=1;  yasAy=dogumAy-ay;

yasYil= yil-dogumYil;

printf(" %d yil %d ay %d gun yasindadir",yasYil,yasAy,yasGun);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
