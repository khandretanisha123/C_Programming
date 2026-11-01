/// print even factorial 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    EvenFActoria
//     Description  :    return factorial of even number
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    01/11/2026
// 
//////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1 ;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt <=iNo; iCnt++)
    {
        if(iCnt %2 == 0)
        {
            iFact = iFact * iCnt ;
        }
    }

    return iFact;
}



int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even FActorial of number is %d ",iRet);

    return EXIT_SUCCESS;
}