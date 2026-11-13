/*
    Accept character and check it is specisl symbol or not 
    (!,@,#,$,%,^,&,*)

*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkSpecial(Check Special)
//     Description  :    Check charcater is special symbol or not 
//     Input        :    character
//     Output       :    boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
//////////////////////////////////////////////////

typedef int BOOL ;

BOOL ChkSpecial(char ch )
{
    if( (ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
        (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*') )
    {
        return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = false ;

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("IT is special character ");
    }
    else
    {
        printf("It is not a Special Character ");
    }

    return EXIT_SUCCESS ;
}