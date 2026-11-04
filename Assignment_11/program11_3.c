//Accept start number and end number display range Sum

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    RangeSum
//     Description  :    Display range sum
//     Input        :    Integer
//     Output       :    return Sum 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
//////////////////////////////////////////////////

int RangeSum( int iStart , int iEnd )
{
    int iCnt = 0 ;
    int iSum = 0 ;

    if( (iStart ,iEnd <= 0) && iStart < iEnd)
    {
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            iSum = iSum +iCnt ;

        }
    }
    else
    {
       printf("Invalid Range\n");

    }
    return iSum ;
}

int main()
{
    int iValue1 , iValue2 = 0 ;
    int iRet = 0 ;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    printf("Addition is %d",iRet);

    return EXIT_SUCCESS ;
}