#include <stdio.h>
#include <string.h>

 struct ofis{
     char isim[50];
     char soyisim[50];
     int yas;
     int sira;
     
 };

int main()
{   
    struct ofis sedat,arda;
    struct ofis harun;
    struct ofis dogukan;
    struct ofis rami;
    struct ofis harun2;
    struct ofis can;
    struct ofis nazmiye;
    struct ofis ugur;
    struct ofis mehmet;
    struct ofis tuna;
    
    strcpy(sedat.isim,"Sedat");



    strcpy(arda.isim,"arda");
    strcpy(harun.isim,"harun");
    strcpy(dogukan.isim,"dogukan");
    strcpy(rami.isim,"rami");
    strcpy(harun2.isim,"harun");
    strcpy(can.isim,"can");
    strcpy(nazmiye.isim,"nazmiye");
    strcpy(ugur.isim,"ugur");
    strcpy(mehmet.isim,"mehmet");
    strcpy(tuna.isim,"tuna");
    
    strcpy(sedat.soyisim,"bil");
    strcpy(arda.soyisim,"mantaş");
    strcpy(harun.soyisim,"kırbıyık");
    strcpy(dogukan.soyisim,"gülyaşar");
    strcpy(rami.soyisim,"yassine");
    strcpy(harun2.soyisim,"mohamed");
    strcpy(can.soyisim,"ilgu");
    strcpy(nazmiye.soyisim,"bil");
    strcpy(ugur.soyisim,"ön");
    strcpy(mehmet.soyisim,"kılıç");
    strcpy(tuna.soyisim,"ataş");
    
    sedat.yas=28;
    arda.yas=24;
    harun.yas=25;
    dogukan.yas=30;
    rami.yas=27;
    harun2.yas=24;
    can.yas=24;
    nazmiye.yas=30;
    ugur.yas=17;
    mehmet.yas=25;
    tuna.yas=28;
    
    
    sedat.sira=1;
    arda.sira=2;
    harun.sira=4;
    dogukan.sira=5;
    rami.sira=6;
    harun2.sira=7;
    can.sira=8;
    nazmiye.sira=9;
    ugur.sira=10;
    mehmet.sira=11;
    tuna.sira=12;
    
    printf("isim: %s  %s  %d  %d \n",sedat.isim,sedat.soyisim,sedat.yas,sedat.sira);
    printf("%s  %s  %d  %d \n",arda.isim,arda.soyisim,arda.yas,arda.sira);
    printf("%s  %s  %d  %d \n",harun.isim,harun.soyisim,harun.yas,harun.sira);
    printf("%s  %s  %d  %d \n",dogukan.isim,dogukan.soyisim,dogukan.yas,dogukan.sira);
    printf("%s  %s  %d  %d \n",rami.isim,rami.soyisim,rami.yas,rami.sira);
    printf("%s  %s  %d  %d \n",harun2.isim,harun2.soyisim,harun2.yas,harun2.sira);
    printf("%s  %s  %d  %d \n",can.isim,can.soyisim,can.yas,can.sira);
    printf("%s  %s  %d  %d \n",nazmiye.isim,nazmiye.soyisim,nazmiye.yas,nazmiye.sira);
    printf("%s  %s  %d  %d \n",ugur.isim,ugur.soyisim,ugur.yas,ugur.sira);
    printf("%s  %s  %d  %d \n",mehmet.isim,mehmet.soyisim,mehmet.yas,mehmet.sira);
    printf("%s  %s  %d  %d \n",tuna.isim,tuna.soyisim,tuna.yas,tuna.sira);
   
   return 0;
}
