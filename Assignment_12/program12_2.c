//Accept number from user and check whether it contains 0 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkZero
//     Description  :    Accept number from user  check whether it contains 0 in it or not
//     Input        :    Integer
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

typedef int BOOL ;

BOOL ChkZero(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    int iDigit = 0 ;

    while (iNo > 0)
    {
        iDigit  = iNo % 10 ;
        iNo = iNo / 10 ;

        if(iDigit == 0)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }
    
}

int main ()
{
    int iValue = 0 ;
    BOOL bRet = false ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true )
    {
        printf("It Contain Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}


