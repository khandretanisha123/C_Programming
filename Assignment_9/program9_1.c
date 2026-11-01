
////////////////////////////////
//  input : 5
//
//   *  *   *   *   *   #   #   #   #   #
//////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    Print * and #
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    01/11/2026
// 
//////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    int iCnt = 0 ;
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number: \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;
}