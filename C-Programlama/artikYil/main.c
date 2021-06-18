#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil;
    printf("Yili giriniz :\n");
    scanf("%d",&yil);
    
    if((yil % 4 == 0) && (yil % 100 == 0) && (yil % 400 == 0))
    {
        printf("%d yili artik yildir",yil);
    }
    else
    {
        printf("%d yili artik yil degildir",yil);
    }
    return 0;
}