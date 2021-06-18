#include <stdio.h>

void modAlma(int kalan,int bolen,int bolum)
{
    if (bolen == 0)
    {
        printf("0 a bolme hatasi");
    }
    else
    {
        while (kalan >= bolen)
        {
            kalan -= bolen;
            bolum += 1;
        }
        printf("bolum: %d , kalan : %d",bolum,kalan);
    }
}

int main()
{
   int bolunen,bolen,bolum=0;

   printf(" Bolunen Sayiyi giriniz: ");
   scanf("%d",&bolunen);
   printf("Bolen Sayisini giriniz: ");
   scanf("%d",&bolen);

   modAlma(bolunen,bolen,bolum);
   
   return 0;
}