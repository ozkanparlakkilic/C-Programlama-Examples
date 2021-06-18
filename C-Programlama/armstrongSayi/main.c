#include <stdio.h>


int usAlma(int base,int us)
{
    int temp = base;
    for (int i = 0; i < us - 2; i++)
    {
        base = temp * base;
    }
    if (us == 1)
    {
        base = 1;
        return base;
    }
    else
    {
       return base; 
    }
    
}

int dereceliUsAlma(int k,int count)
{
    int temp = k;
    for (int i = 1; i < count; i++)
    {
       k = k*temp;
    }
    
    return k;
}

void kupToplama(int sayi)
{
   int temp=sayi,sayac=0,bolen;
   
   while (temp > 0)
   {
       temp = temp / 10;
       sayac++;
   }
   temp = sayi;
   int basamak,toplam = 0;

   for (int i = sayac; i > 0; i--)
   {
       bolen = usAlma(10,i);
       basamak = temp / bolen;
       temp -= basamak * bolen;
       printf("sayi : %d\n",basamak);
       printf("%d\n",dereceliUsAlma(basamak,sayac));
       toplam += dereceliUsAlma(basamak,sayac); 
   }
   printf("Toplam : %d",toplam);
   if (toplam == sayi)
   {
       printf("%d sayisi armstrong sayidir",sayi);
   }
   else
   {
       printf("%d sayisi armstrong sayi degildir",sayi);
   }
}

int main()
{
   int sayi;

   printf("Sayi giriniz\n");
   scanf("%d",&sayi);

   kupToplama(sayi);

   return 0;
}