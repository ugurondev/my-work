#include <time.h>
#include <stdio.h>
#include <string.h>
struct kullanici{
    char tahminin[50];
    int paran;
};
struct kullanici oyun(int para,char tahmin[50]){
    struct kullanici sonuc;
    sonuc.paran=para;
    strcpy(sonuc.tahminin,tahmin);
    printf("%s\n",sonuc.tahminin);
    printf("%d\n",sonuc.paran); 
    for (;sonuc.paran>0;sonuc.paran--) {
            printf("%s\n",sonuc.tahminin);
            printf("%d\n",sonuc.paran); 
     if(rand() %100 <50){
         char rtahmin[50]="yazı";
         if(rtahmin==sonuc.tahminin){
            printf("Doğru tahmin yazı");
         }
         if(rtahmin!=sonuc.tahminin){
             printf("Yanlış tahmin cevap:tura\n ");
         }
         
     }
     if(rand()>=50){
         char rtahmin2[50]="tura";
         if(rtahmin2==sonuc.tahminin){
             printf("Doğru tahmin tura");
         }
         if(rtahmin2!=sonuc.tahminin){
             printf("Yanlış tahmin cevap:yazı\n ");
         }
      }

     }
    return sonuc;
    }    

struct kullanici giris(){
    struct kullanici oyuncu;
    char tah[50];
    int par;
   
    printf("Lütfen para miktarınızı giriniz:");
    scanf("%d",&par);
    oyuncu.paran=par;
     for(;oyuncu.paran>0;oyuncu.paran--){
        printf("Lütfen tahmininizi giriniz:");
        scanf("%s",&tah);
        strcpy(oyuncu.tahminin,tah);
        oyun(oyuncu.paran,oyuncu.tahminin);
        printf("%s",oyuncu.tahminin);
        printf("%d",oyuncu.paran);
     }
    
    return oyuncu;
}

 

int main ()
{
    giris();
    struct kullanici  oyun();
    return 0;
}
