/*
    Accept character from user
        if it is in uppercase print until Z
        if it is in smallcase print it in reverse diraction ie . a

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display 
//     Description  :    Display charcter 
//     Input        :    character
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
//////////////////////////////////////////////////

void Display (char ch)
{
    int iCnt = 0 ;

    if(ch >= 65 && ch <= 90)
    {
        for(iCnt = ch ; iCnt <= 90 ; iCnt ++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if( ch >= 97 && ch <= 122)
    {
        for(iCnt = ch ; iCnt >=97 ; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}