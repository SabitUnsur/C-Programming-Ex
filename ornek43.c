#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
}; struct ogrenci *kisi;
   //struct ogrenci *ptr=&kisi

(*kisi).yas=15;
kisi->yas=15;

printf("%d",(*kisi).yas);

// NESTED STRUCTURES //
	
struct tarih{
	int gun;
	char ay[10];
	int yil;
};	

struct student{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
	struct tarih dogumtarihi;
}; struct student person;


scanf("%d",&person.dogumtarihi.gun);
scanf("%d",&person.dogumtarihi.ay);
person.dogumtarihi.yil=2001;


// STRUCTURES WITH FUNCTIONS //

struct noktaTipi{
	int x,y
};

struct noktaTipi OKu(void)
{
	struct noktaTipi gecici;
	printf("x ve y koordinatlarýný girin:");
	scanf("%d%d",&gecici.x,&gecici.y);
	return (gecici);	
};


struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

void fonksiyon (int x){ }

struct ogrenci kisi;
fonksiyon(kisi.yas);


//STRUCTIN DEGER PARAMETRESI OLARAK FONKSIYONA IMPLEMENTESI//

struct ogrenci{	
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

void fon(struct ogrenci k)
{
	k.yas=20;
}

struct ogrenci student1;
fon(student1);

	return 0;
}
