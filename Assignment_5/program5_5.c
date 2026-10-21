// Identify Character Type

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckCharacterType
//     Description  :    Display Character Type
//     Input        :    Charcter
//     Output       :    Display Character Type
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }

}

int main()
{
    char cValue ='\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}