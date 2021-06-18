#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int toplam = 0;

    printf("Sayi giriniz\n");
    scanf("%d",&sayi);

    for (int i = 1; i < sayi; i++)
    {
        if(sayi % i == 0)
        {
            toplam = toplam + i;
        }
    }
    
    if (toplam == sayi)
    {
        printf("%d sayisi mukemmel sayidir",sayi);
    }
    else
    {
        printf("%d sayisi mukemmel sayi degildir",sayi);
    }
    

    return 0;
}