#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PI = 3.14;
    float r,cevre,alan;
    printf("Yaricap :\n");
    scanf("%f",&r);
    
    cevre = 2 * PI * r;
    alan = PI * r * r; 
    printf("Dairenin cevresi : %.2f\n",cevre);
    printf("Dairenin alani : %.2f\n",alan);
    return 0;
}