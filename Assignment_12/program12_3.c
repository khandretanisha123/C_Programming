// Accept number and count frequencu of 2 in it

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountTwo
//     Description  :    Accept number and count frequencu of 2 in it
//     Input        :    Integer
//     Output       :    retrun count of 2
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int CountTwo(int iNo)
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

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}