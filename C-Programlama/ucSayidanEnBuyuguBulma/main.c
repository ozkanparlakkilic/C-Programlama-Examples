#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birinciSayi,ikinciSayi,ucuncuSayi;
    printf("Birinci sayiyi giriniz :\n");
    scanf("%d",&birinciSayi);
    printf("Ikinci sayiyi giriniz :\n");
    scanf("%d",&ikinciSayi);
    printf("Ucuncu sayiyi giriniz :\n");
    scanf("%d",&ucuncuSayi);


    if(birinciSayi > ikinciSayi)
    {
        if(birinciSayi >= ucuncuSayi)
        {
            printf("En buyuk sayi : %d",birinciSayi);
        }
        else
        {
            printf("En buyuk sayi : %d",ucuncuSayi);
        }
    }
    else if(birinciSayi == ikinciSayi)
    {
        if(birinciSayi >= ucuncuSayi)
        {
            printf("En buyuk sayi : %d",birinciSayi);
        }
        else
        {
            printf("En buyuk sayi : %d",ucuncuSayi);
        }
    }
    else
    {
        if(ikinciSayi >= ucuncuSayi)
        {
            printf("En buyuk sayi : %d",ikinciSayi);
        }
        else
        {
            printf("En buyuk sayi : %d",ucuncuSayi);
        }
    }
    return 0;
}
