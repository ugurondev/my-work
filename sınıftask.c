/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
*/
#include <stdio.h>
#include <string.h>

    struct ogrenci{
        char isim[50];
        char soyisim[50];
        char  ogrencino[50];
        
    };
    
   char ogrenciekle(char ogrnecis[40],char ogrencisoy[40],char ogrencin[40]){
       printf("%s,",ogrnecis);
       printf("%s,",ogrencisoy);
       printf("%s--",ogrencin);
   }
   
int main()
{   
    struct ogrenci kisi1,kisi2,kisi3,kisi4,kisi5,kisi6,kisi7,kisi8,kisi9,kisi10;
   char a[40];
   char s[40];
   char no[40];
   int i=1;
   for(;i<=10;i++){
       printf("öğrenci ismini giriniz:");
       scanf("%s",a);
       printf("öğrenci soyismini giriniz:");
       scanf("%s",s);
       printf("öğrenci numarasını giriniz:");
       scanf("%s",no);
  
  
   
   }
    if(i=1){
            strcpy(kisi1.isim,a);
            strcpy(kisi1.soyisim,s);
            strcpy(kisi1.ogrencino,no);
   ogrenciekle(kisi1.isim,kisi1.soyisim,kisi1.ogrencino);
     }
   
       if(i=2){
            strcpy(kisi2.isim,a);
            strcpy(kisi2.soyisim,s);
            strcpy(kisi2.ogrencino,no);
   ogrenciekle(kisi2.isim,kisi2.soyisim,kisi2.ogrencino);
     } 
      if(i=3){
            strcpy(kisi3.isim,a);
            strcpy(kisi3.soyisim,s);
            strcpy(kisi3.ogrencino,no);
   ogrenciekle(kisi3.isim,kisi3.soyisim,kisi3.ogrencino);
     }
      if(i=4){
            strcpy(kisi4.isim,a);
            strcpy(kisi4.soyisim,s);
            strcpy(kisi4.ogrencino,no);
   ogrenciekle(kisi4.isim,kisi4.soyisim,kisi4.ogrencino);
     }
      if(i=5){
            strcpy(kisi5.isim,a);
            strcpy(kisi5.soyisim,s);
            strcpy(kisi5.ogrencino,no);
   ogrenciekle(kisi5.isim,kisi5.soyisim,kisi5.ogrencino);
     }
      if(i=6){
            strcpy(kisi6.isim,a);
            strcpy(kisi6.soyisim,s);
            strcpy(kisi6.ogrencino,no);
   ogrenciekle(kisi6.isim,kisi6.soyisim,kisi6.ogrencino);
     }
      if(i=7){
            strcpy(kisi7.isim,a);
            strcpy(kisi7.soyisim,s);
            strcpy(kisi7.ogrencino,no);
   ogrenciekle(kisi7.isim,kisi7.soyisim,kisi7.ogrencino);
     }
      if(i=8){
            strcpy(kisi8.isim,a);
            strcpy(kisi8.soyisim,s);
            strcpy(kisi8.ogrencino,no);
   ogrenciekle(kisi8.isim,kisi8.soyisim,kisi8.ogrencino);
     }
      if(i=9){
            strcpy(kisi9.isim,a);
            strcpy(kisi9.soyisim,s);
            strcpy(kisi9.ogrencino,no);
   ogrenciekle(kisi9.isim,kisi9.soyisim,kisi9.ogrencino);
     }
      if(i=10){
            strcpy(kisi10.isim,a);
            strcpy(kisi10.soyisim,s);
            strcpy(kisi10.ogrencino,no);
   ogrenciekle(kisi10.isim,kisi10.soyisim,kisi10.ogrencino);
      }
   /* 
   char deneme[3][9]{{"Ugur"},{"Doğukan"},{"Samet"}};
for (int i=0;i<3;i++){
    for(int j=0;j<9;j++){
        printf("%c",deneme[i][j]);
        
    }
    */
       return 0;
}
    
 



