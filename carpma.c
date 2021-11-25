#include <stdio.h>
#include <string.h>
int sonuc(int son)
{
   int a=6*son;

    return (a);
}

int carp( int sayicarp){
    int c=3*sayicarp;
    
    c=sonuc(c);

return c;
}
int main ()
{
    int sayi;
    int gelen;
        printf("Bir Sayı Giriniz:");
        scanf("%d",&sayi);
       gelen=carp(sayi);
       printf("%d",gelen);
  return 0;
}

