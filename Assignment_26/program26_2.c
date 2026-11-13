// Accept character and change its case and print

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display 
//     Description  :    Display character
//     Input        :    character
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
//////////////////////////////////////////////////

void Display (char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32 ;
        printf("%c",ch);
    }
    else if (ch >= 97 && ch <=122 )
    {
        ch = ch - 32 ;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS ;
}