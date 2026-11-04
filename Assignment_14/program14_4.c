//Accept number and print its sumation of non factorial number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    NontFact
//     Description  :    Accept number print its sumation of non of factor
//     Input        :    Integer
//     Output       :    retrun integer sumation
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int SumNonfact(int iNo)
{
    int iCnt = 0 ;
    int iSum = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if(iNo % iCnt != 0 )
        {
            iSum = iSum + iCnt ;
        }
    }
    return iSum ;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number : ") ;
    scanf("%d",&iValue);

    iRet = SumNonfact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}