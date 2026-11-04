// Accept number and count of odd digit

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountEven
//     Description  :    Accept number and count of odd Digit
//     Input        :    Integer
//     Output       :    retrun count 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0 ;
    int iCount = 0 ;

    if(iNo < 0)
    {
        iNo = - iNo ;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10 ;

        if(iDigit % 2 != 0)
        {
            iCount ++ ;
        }
    }
    return iCount ; 
}
int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}