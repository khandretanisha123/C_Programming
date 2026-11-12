//Accepy charcter and check it is alphabets or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :     ChkAlpha(Check Alphabet)
//     Description  :    check input is alphabet or not
//     Input        :    Character
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    12/11/2026
// 
//////////////////////////////////////////////////

typedef int BOOL ;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <=90))
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = false ;

    printf("Enter the charcater ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if( bRet == true)
    {
        printf("It is charcter");
    }
    else
    {
        printf("It is not Charcter");
    }

    return EXIT_SUCCESS ;
}