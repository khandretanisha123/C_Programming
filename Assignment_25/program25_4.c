//Accept character and check it is in lowercase or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkSmall(Check Digit)
//     Description  :    check character it in upercase or not
//     Input        :    Character
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    12/11/2026
// 
//////////////////////////////////////////////////

BOOL ChkSmall(char ch ) 
{
    if(ch >= 91 && ch <= 122)
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

    bRet = ChkSmall(cValue);

    if(bRet == true )
    {
        printf("It is Small case character");
    }
    else
    {
        printf("It is not Small case character");
    }

    return EXIT_SUCCESS;
}
