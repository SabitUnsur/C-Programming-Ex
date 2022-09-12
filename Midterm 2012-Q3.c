#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void arr2mat(char dzg1[],char mat1[8][8],int satir,int sutun)
{
	// 64 uzunluklu dizgi,8x8 boyutunda dizgi matrisine cevirilcek
	int i,j;
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			 dzg1[j] = mat1[i][j];
		}		
	}	
}

void trnsmat(char mat1[8][8],char mat2[8][8],int satir,int sutun)
{
	//dizgi matrisinin transpozesi alýnacak
	int i,j;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			mat2[j][i]=mat1[i][j];	
		}		
	}	
}

void mat2arr(char mat2[8][8],char dzg2[],int satir,int sutun)
{
	//8x8 boyutundaki dizgi matrisi , 64 uzunluklu dizgiye cevirecek 
	int i,j,k=0;
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
	 		dzg2[k]=mat2[i][j];
	 		k++;				 		
	 	}
	}
}

void kodlaveyacoz (char Dzg1[],char Mat1[8][8],char Mat2[8][8],char Dzg2[],int satir,int sutun)
{
	arr2mat(Dzg1,Mat1,satir,sutun); //Dzg1 --> Mat1
	trnsmat(Mat1,Mat2,satir,sutun); //Mat1---> Devrik Mat2
	mat2arr(Mat2,Dzg2,satir,sutun); //devrik Mat2-->Dzg2
}


int main(int argc, char *argv[]) {
	
	int satir=8;
	int sutun=8;
	
	char dzg1[64]="Erciyes Universitesi a.b.1978 tarihinde Kayseri'de kurulmustur.";
	
	char dzg2[64],dzg3[64];
	char mat1[8][8],mat2[8][8];
	kodlaveyacoz(dzg1,mat1,mat2,dzg2,satir,sutun); //veri kodlaniyor
	puts(dzg2);
	
	kodlaveyacoz(dzg2,mat2,mat1,dzg3,satir,sutun); //kodlanmis verinin kodu cozuluyor;
	puts(dzg3);
	
	system("PAUSE");
		
	return 0;
}




