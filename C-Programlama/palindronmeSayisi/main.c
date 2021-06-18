#include <stdio.h>

int main()
{
   int n, basamak = 0, temp;

   printf("LUTFEN BIR SAYI GIRINIZ\n");
   scanf("%d",&n);

   temp = n;

   while( temp != 0 )
   {
      basamak = basamak * 10;
      basamak = basamak + temp%10;
      temp = temp/10;
   }

   if ( n == basamak )
      printf("%d PALINDROMIK BIR SAYIDIR\n", n);
   else
      printf("%d PALINDROMIK DEGILDIR\n", n);

   return 0;
}