// Accept start number and end number display range 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    RangeDisplay
//     Description  :    Display range 
//     Input        :    Integer
//     Output       :    print integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
//////////////////////////////////////////////////

void RangeDisplay (int iStart , int iEnd)
{
    int iCnt = 0 ;

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 , iValue2 = 0 ;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS ;
}