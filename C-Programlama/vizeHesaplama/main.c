#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vize1,vize2,final,sonuc;
    printf("Vize 1 notunu giriniz :\n");
    scanf("%f",&vize1);
    printf("Vize 2 notunu giriniz :\n");
    scanf("%f",&vize2);
    printf("Vize 3 notunu giriniz :\n");
    scanf("%f",&final);

    sonuc = (vize1 * 0.3) + (vize2 * 0.3) + (final * 0.4);

    if(sonuc > 100)
    {
        printf("Girilen notları kontrol ediniz");
    }

    else if(sonuc >= 90 && sonuc <= 100)
    {
        printf("%.2f ortalama ile AA ile dersi geçmiştir");
    }
    else if(sonuc >= 80 && sonuc < 90)
    {
        printf("%.2f ortalama ile BA ile dersi geçmiştir");
    }

    else if(sonuc >= 70 && sonuc < 80)
    {
        printf("%.2f ortalama ile BB ile dersi geçmiştir");  
    }

    else if(sonuc >= 60 && sonuc < 70)
    {
        printf("%.2f ortalama ile CB ile dersi geçmiştir");  
    }

    else if(sonuc >= 50 && sonuc < 70)
    {
        printf("%.2f ortalama ile CC ile dersi geçmiştir");     
    }

    else if(sonuc >= 40 && sonuc < 50)
    {
        printf("%.2f ortalama ile DC ile dersi geçmiştir");     
    }

    else if(sonuc >= 30 && sonuc < 40)
    {
        printf("%.2f ortalama ile DD ile dersi geçmiştir");     
    }

    else if(sonuc >= 0 && sonuc < 30)
    {
        printf("%.2f ortalama ile FF ile dersten kalmıştır");     
    }
    else
    {
        printf("Girilen notları kontrol ediniz");
    }

    return 0;
}