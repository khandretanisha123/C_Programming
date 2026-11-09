/*
    Input:
        Number of Element = 4

    Output :

        #   1   *   #   2   *   #   3   *   4   *
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Pattern
//     Description  :    print Above pattern
//     Input        :    Integer
//     Output       :    Diaplay
//     Author       :    Tanisha Pramod Khandre
//     Date         :    09/11/2026
// 
//////////////////////////////////////////////////

void Pattern (int iNo)
{
    int i = 0 ;

    for(i = 1 ; i<= iNo ; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}
int main()
{
    int iValue1 = 0 ;

    printf("Enter number of element :");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}
