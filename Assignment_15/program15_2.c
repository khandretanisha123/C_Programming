//Accept number and print it is greater than 100 or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkGreaater
//     Description  :    Accept number print it is greater than 100 or not
//     Input        :    Integer
//     Output       :    retrun true or False
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////

typedef int BOOL ;

BOOL ChkGRaater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0 ; 
    bool bRet = false ;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkGRaater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS ;
}