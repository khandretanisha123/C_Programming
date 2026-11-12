// Accept character and check it is in uppercase or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

///////////////////////////////////////////////////
//      
//     Funtion name :     ChkCapital(Check Alphabet)
//     Description  :    check input is in uppercase or not
//     Input        :    Character
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    12/11/2026
// 
//////////////////////////////////////////////////

BOOL ChkCapital (char ch)
{
    if( ch >= 65 && ch <= 90 )
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

int main ()
{
    char cValue = '\0';
    BOOL bRet = false ;

    printf("Enter Character :");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return EXIT_SUCCESS ;
}