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
  int citNo
  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
*/
#include <stdio.h>
#include <string.h>

struct ogrenci
{
  char isim[50];
  char soyisim[50];
  int ogrencino;

};

char ogrenciekle (struct ogrenci ogr)
{
    struct ogrenci kisi;
    char kisiismi[40];
    char soyismi[40];
    int no;
    struct ogrenci sinif[2]; 
    
     for(int i=0;i<2;i++){
    
    printf ("Öğrenci ismini giriniz:");
    scanf ("%s", &kisiismi);
    strcpy(kisi.isim,kisiismi);
    
    printf ("Öğrenci soyismini giriniz:");
    scanf ("%s", &soyismi);
    strcpy(kisi.soyisim,soyismi);
    
    printf ("Öğrenci numarassını giriniz:");
    scanf ("%d", &no);
    kisi.ogrencino=no;
    
    sinif[i]=kisi;
   }
   return 0;
}

int main ()
{
  
    

  
   
   
    for(int a=0;a<2;a++){
        printf("%s\n", sinif[a].isim);
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

