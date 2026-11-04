// Accept start number and end number display even range 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    RangeDisplayEven
//     Description  :    Display range Even number 
//     Input        :    Integer
//     Output       :    print integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
//////////////////////////////////////////////////

void RangeDisplayEven (int iStart , int iEnd)
{
    int iCnt = 0 ;

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 , iValue2 = 0 ;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS ;
}