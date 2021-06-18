#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
   
    printf("Bir harf giriniz :\n");
    scanf("%c",&character);
    
    if((character  == 'a') || (character  == 'e') || (character  == 'o') || (character  == 'u'))
    {
        printf("%c harfi kucuk sesli harftir",character);
    }
    else if((character  == 'A') || (character  == 'E') || (character  == 'O') || (character  == 'U'))
    {
        printf("%c harfi buyuk sesli harftir",character);
    }
    else
    {
        printf("%c harfi sessiz harftir",character);
    }
    return 0;
}