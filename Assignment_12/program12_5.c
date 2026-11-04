// Accept number and count frequency of number which is lesser than 6 in it

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Count
//     Description  :    Accept number and count frequency of number which is lesser than 6
//     Input        :    Integer
//     Output       :    retrun count 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0 ;
    int iCount = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10 ;

        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}