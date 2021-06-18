#include <stdio.h>

void asalBulma(int sayi)
{
    int sayac = 0;
    for (int i = 1; i <= sayi; i++)
    {
        if (sayi % i == 0)
        {
            sayac++;
        }
        
    }

    if (sayac == 2)
    {
        printf("%d asal sayidir",sayi);
    }
    else
    {
        printf("%d asal sayi degildir",sayi);
    }
}

int main()
{
   int sayi;

   printf("Sayi giriniz\n");
   scanf("%d",&sayi);

   asalBulma(sayi);
   return 0;
}