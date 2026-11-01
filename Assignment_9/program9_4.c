/// print Odd factorial 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    OddFActoria
//     Description  :    return factorial of odd number
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    01/11/2026
// 
//////////////////////////////////////////////////

int OddFactorial(int iNo)
{
 int iCnt = 0;
    int iFact = 1 ;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt <=iNo; iCnt++)
    {
        if(iCnt %2 != 0)
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}