//Difference between even and odd factorial 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    FactorialDiff
//     Description  :    return factorial Difference of even odd
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    01/11/2026
// 
//////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0 ;
    int iFact = 0 ;

    int iEven = 1 ;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt <=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt ;
        }
        else
        {
            iOdd = iOdd * iCnt ;
        }
    }

    iFact = iEven - iOdd;

    return iFact ;
    
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : \n");
    scanf("%d",& iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d ",iRet);

    return EXIT_SUCCESS;

}