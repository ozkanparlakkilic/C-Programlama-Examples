#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baslangic,bitis;
    int toplam = 0;

    printf("Baslangic sayisini giriniz\n");
    scanf("%d",&baslangic);
    printf("Bitis sayisini giriniz\n");
    scanf("%d",&bitis);

    for (int i = baslangic + 1; i < bitis; i++)
    {
        toplam = toplam + i;
    }
    
    printf("Toplam : %d",toplam);
    
    return 0;
}