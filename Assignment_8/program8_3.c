// Factorial of Number 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Factorial
//     Description  :    return Factorial
//     Input        :    Integer
//     Output       :    return Integr
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

int Factorial(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    int iCnt = 0 ;
    int iFact = 1 ;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        iFact = iFact * iCnt ;
        
    }

    return iFact;
}

int main ()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS ;
}
