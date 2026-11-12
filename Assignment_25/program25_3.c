//Accept character from user and check it is digit or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkDigit(Check Digit)
//     Description  :    check it is Digit or not
//     Input        :    Character
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    12/11/2026
// 
//////////////////////////////////////////////////

BOOL ChkDigit(char ch ) 
{
    if(ch >= 48 && ch <= 57)
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

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true )
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not Digit");
    }

    return EXIT_SUCCESS;
}
