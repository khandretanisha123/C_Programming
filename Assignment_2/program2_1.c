//Accept number and print number of *

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    print * of accepted number
//     Input        :    Integer
//     Output       :    Display * 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0 ;

    while(iCnt <= iNo)
    {
        printf("*");
        
        iCnt++;
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}