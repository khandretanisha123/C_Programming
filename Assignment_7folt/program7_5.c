// Accept number and print its first 5 mmultiple

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    MultpleDisplay
//     Description  :    Print First 5 multiple of number
//     Input        :    Integer
//     Output       :    Display
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <=5 ; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}