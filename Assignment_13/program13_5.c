//Accept number print its Sumation of even - Sumation  of odd

// Ex : 2395   ->   2 - 17 == -15

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountDiff
//     Description  :    Accept number print its Sumation of even - Sumation  of odd
//     Input        :    Integer
//     Output       :    retrun Difference 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0 ;
    int iAns = 0 ;
    int iSumEven = 0 ;
    int iSumOdd = 0 ;
    

    while (iNo >0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo /10 ;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit ;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit ;
        }
    }
    
    iAns = iSumEven - iSumOdd;

    return iAns ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}