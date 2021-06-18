#include <stdio.h>

int main()
{
   int dizi[10],temp;

   for (int i = 0; i < 10; i++)
   {
        printf("%d . inci elemani giriniz\n",i+1);
        scanf("%d",&dizi[i]);
   }

   for (int i = 0; i < 10; i++)
   {
       for (int j = 0; j < 10 - 1; j++)
       {
           if (dizi[j] > dizi[j+1])
           {
               temp = dizi[j];
               dizi[j] = dizi[j+1];
               dizi[j+1] = temp;
           }
       }
   }
   
   for (int i = 0; i < 10; i++)
   {
       if (i == 0)
       {
           printf("%d",dizi[i]);
       }
       else
       {
           printf(" --> %d",dizi[i]);
       }
      
   }
   
   return 0;
}