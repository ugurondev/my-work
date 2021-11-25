#include <stdio.h>
#include <string.h>

struct ogrenci
{
    char isim[50];
    char soyisim[50];
    int ogrencino;

};

struct ogrenci sinif[2];

void ogrenciekle(struct ogrenci yeni, int i)
{
    sinif[i]=yeni;
}

void ogrencilistele(struct ogrenci sinif[], int size ){

    for(int a=0;a<size;a++){
        printf("%s\n", sinif[a].isim);
        printf("%s\n", sinif[a].soyisim);
        printf("%d\n", sinif[a].ogrencino);
    }
    
}

int main ()
{
    struct ogrenci kisi;
    for(int i=0;i<2;i++){
    
        printf ("Öğrenci ismini giriniz:");
        scanf ("%s", &kisi.isim);
        
        printf ("Öğrenci soyismini giriniz:");
        scanf ("%s", &kisi.soyisim);
        
        printf ("Öğrenci numarassını giriniz:");
        scanf ("%d", &kisi.ogrencino);
        
        ogrenciekle(kisi,i);
        
   }
   
     ogrencilistele(sinif,2);
  
 
  return 0;
}
