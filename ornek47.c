#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct denklem{float a,b,c,kok1,kok2;};
typedef struct denklem DENKLEM;
void kok_hesapla(struct denklem *);
    
int main(void){
    DENKLEM D[5];int i;
    for(i=0;i<5;i++){
        printf("%d. denklemin a, b ve c katsayilarini giriniz -> ",i+1);
        scanf("%f%f%f",&D[i].a,&D[i].b,&D[i].c);}
    
    kok_hesapla(D);
    
    printf("\n\n");
    
    for(i=0;i<5;i++)
        printf("%d: %5.2f x2 + %5.2f x + %5.2f = 0 denkleminin kokleri kok1 = %5.2f ve kok2 = %5.2f\n\n",i+1,D[i].a,D[i].b,D[i].c,D[i].kok1,D[i].kok2);
    return 0;}

void kok_hesapla(struct denklem *p){
    int i;float delta;
    for(i=0;i<5;i++){
        delta=(p+i)->b*(p+i)->b-4*(p+i)->a*(p+i)->c;
        if (delta<0) {(p+i)->kok1=NAN;(p+i)->kok2=NAN;}
        else{
            (p+i)->kok1=(-(p+i)->b+sqrt(delta))/(2*(p+i)->a);
            (p+i)->kok2=(-(p+i)->b-sqrt(delta))/(2*(p+i)->a);}}}
