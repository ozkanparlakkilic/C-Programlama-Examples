#include <stdio.h>

int main()
{
   int sayi,k,ilksayi,toplam=0;

   printf("Sayiyi giriniz: ");
   scanf("%d",&sayi);

   ilksayi = sayi;

   while (sayi > 0)
   {
       k = sayi % 10;
       sayi = sayi / 10;
       toplam = toplam + k;
   }
   
   printf("%d sayisinin rakamlari toplami : %d",ilksayi,toplam);
   
   return 0;
}