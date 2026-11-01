// Accept number and print $    * till that number 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Pattern
//     Description  :    Print $    *
//     Input        :    Integer
//     Output       :    Display
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS ;
}