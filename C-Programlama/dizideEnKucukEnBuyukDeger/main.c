#include <stdio.h>

int main()
{
   int dizi[10],max,min,length=0;

   for (int i = 0; i < 10; i++)
   {
        printf("%d . inci elemani giriniz\n",i+1);
        scanf("%d",&dizi[i]);

        if (i == 0)
        {
            min = max = dizi[0];
        }

        if (max<=dizi[i])
        {
            max = dizi[i];
        }
        if (min >= dizi[i])
        {
            min = dizi[i];
        }
   }

   printf("Maximum sayi : %d\nMinimum sayi : %d\n",max,min);
   return 0;
}