//Accept number and print its difference of sumaction of factors and non factors

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    FactDiff
//     Description  :    Accept number print its difference of sumaction of factors and non factors
//     Input        :    Integer
//     Output       :    retrun integer Difference
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////

int FactDiff(int iNo)
{
    int icnt = 0 ;
    int iSumFact = 0 ;
    int iSumNonFact =0 ;
    int iAns = 0 ;

    for(icnt = 1 ; icnt < iNo ; icnt++)
    {
        if(iNo % icnt == 0)
        {
            iSumFact = iSumFact + icnt ;
        }
        else
        {
            iSumNonFact = iSumNonFact + icnt ;
        }
    }

    iAns = iSumFact - iSumNonFact ;

    return iAns ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;


    printf("Enter number : ");
    scanf("%d",& iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}