#include <stdio.h>
#include <stdlib.h>

int Kontrolcu(char[],char);

int main(int argc, char *argv[]) {
	
 int i;
 char esas[36]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
 char  tek[36]="0123456789ABCDEFGHIJLMNOPQRSTUVWXYZ";
 char cift[36]="9Z8Y7X6W5V4U3T2S1ROQPONMLKJIHGFEDBCA";
 
 char veri[36];
 printf("Sifrelenecek Kelimeyi giriniz\n");
 gets(veri);	
 
 int kelimeUzunluk=strlen(veri);
	
	
char kodlu[36],kodsuz[36];

// ENCRYPTION //

for(i=0;i<kelimeUzunluk;i++)
{ 
	if(veri[i]==' ') kodlu[i]=' ';
	else  kodlu[i]= (i%2==0)? cift[Kontrolcu(esas,veri[i])] : tek[Kontrolcu(esas,veri[i])];
}

kodlu[i]='\0'; printf("Kodlanmis Metin : %s\n",kodlu);

// DECRYPTION //

for(i=0;i<kelimeUzunluk;i++){
      if (kodlu[i]==' ') kodsuz[i]=' '; else 
          kodsuz[i]=(i%2==0)?esas[Kontrolcu(cift,kodlu[i])]:esas[Kontrolcu(tek,kodlu[i])];}
    
    kodsuz[i]='\0';printf("Kodsuz metin : %s\n\n",kodsuz);

return 0;
}

int Kontrolcu(char esas[36] ,char arastirilacakKarakter)
{
	int i;
	for(i=0;i<36;i++){
		if( arastirilacakKarakter == esas[i] )
		 break;	
	}
	return i;
}
