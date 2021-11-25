#include <stdio.h>




 
int faktoriyel(int sayi){

    int sonuc=1;

    for(;sayi>=1;sayi--){
     sonuc=sonuc*sayi;

    }

   return sonuc;
    
}

float sonun(int ikisayifark,int ikincisayi,int ilksayi){
    printf("%d,%d,%d",ikisayifark,ikincisayi,ilksayi);
    float yap=ilksayi/(ikisayifark*ikincisayi);
    
    printf("son:%lf",yap);
   return yap;   
}

int main()
{
   int cikari;
   int ilkgirilen;
    int ikincigirilen;
    printf("bir sayı girinz:");
    scanf("%d",&ilkgirilen); 
    printf("ikinci sayıyı girinz:");
    scanf("%d",&ikincigirilen);
    cikari=ilkgirilen-ikincigirilen;

    sonun(faktoriyel(cikari),faktoriyel(ikincigirilen),faktoriyel(ilkgirilen));

    return 0;
}
