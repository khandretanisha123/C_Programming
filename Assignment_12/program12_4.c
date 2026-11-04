// Accept number and count frequencu of 4 in it

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountFour
//     Description  :    Accept number and count frequencu of 4 in it
//     Input        :    Integer
//     Output       :    retrun count of 2
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDgit = 0 ;
    int iCount = 0 ;

    while (iNo > 0)
    {
        iDgit = iNo % 10 ;
        iNo = iNo / 10 ;

        if(iDgit == 4)
        {
            iCount ++ ;
        }
    }
    return iCount ; 
}

int main()
{
    int iValue = 0 ;
    int bRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CountFour(iValue);
    printf("%d",bRet);

    return EXIT_SUCCESS ;
}