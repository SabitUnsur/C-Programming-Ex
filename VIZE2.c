#include <stdio.h>
#include <string.h>

int lokasyon(char [],char);

int main(void){
	
    char esas[36]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char tek_[36]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cift[36]="9Z8Y7X6W5V4U3T2S1R0QPONMLKJIHGFEDCBA";
    char veri__[]="ERCIYES UNV 1978 YILINDA KURULDU";
    
    char kodlu_[36],kodsuz[36];
    
    printf("\n\nEsas   metin : %s\n\n",veri__);
    
    int  karakterSayi=strlen(veri__),i;
    
    // S�FRELENM�S HAL� //
    
    for(i=0;i<karakterSayi;i++){
    	
      if (veri__[i]==' ') kodlu_[i]=' '; 
	    else
          kodlu_[i]=(i%2==0) ? cift[lokasyon(esas,veri__[i])] : tek_[lokasyon(esas,veri__[i])];}
          
    kodlu_[i]='\0';
	
	printf("Kodlu  metin : %s\n\n",kodlu_);
    
    
    // ��Z�ML� HAL� //
    
    for(i=0;i<harfSayi;i++){
    	
      if (kodlu_[i]==' ') kodsuz[i]=' '; 
	  	else 
          kodsuz[i]= (i%2==0) ? esas[karsilastirma(cift,kodlu_[i])] : esas[karsilastirma(tek_,kodlu_[i])];}
    
    kodsuz[i]='\0';
	
	printf("Kodsuz metin : %s\n\n",kodsuz);
    
    return 0;}

int karsilastirma(char veri__[36],char oAnkiHarf){
    int i;
    for(i=0;i<36;i++) 
	{
		if (veri__[i]==oAnkiHarf[i])
		{
			break;	
		}
	}
	
    return i;}
    
    
    // A L G O R I T M A //
    
    /* 
    	1.Ba�la
    	2.char esas[36],tek_[36],cift_[36],veri__[36],kodlu[36],kodsuz[36] dizilerini tan�mla.
    	3. int karakteSayisi,i tan�mla. 
    	4. karakterSayisi=strlen(veri__) tan�mlayarak c�mlenin karakter sayisini al.
    	5. i=0 ' dan karakterSayisina kadar i yi 1 artt�r.
    	6. e�er bo�luk karakterine denk gelirsen kodlu i�in de ayn� lokasyona ayn� de�eri ata.
    	7. De�ilse c�mlenin i�inde ka��nc� indekste oldugunu bul ve bu indeks numaras�n�n tek veya �ift oldu�unu bul
    	   �ift ise --->  c�mle dizisinde o anda �zerinde bulunulan harfin kar��l���n�n esas dizide ka��nc� indekse denk geldi�ini bul ve bu indeksin 
    	   cift dizisinde hangi harfe karsilik geldigini bul ve kodlu dizisinin o anki indeksine bu harfi yerlestir.
    	8. tek ise --> " " " " " " " "  " " " " "
    	9. karakterSayisi kadar dizi d�nd�yse devam et bitmedi ise 5 'e git.
    	10. Yazd�r
    	11. Bitir. */
    
    
    
