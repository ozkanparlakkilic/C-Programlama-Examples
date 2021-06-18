#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,yuz,on,bir;
    int enb=0;
    
    for (n = 999; n > 100; n--)
    {
        yuz = n/100;
        on = (n % 100)/10;
        bir = n % 10;

        if ((yuz == bir) && (yuz != on))
        {
            enb = n;
            break;
        }
        
    }
    
    printf("En buyuk 3 basamakli palindronme sayi : %d",enb);
    return 0;
}

