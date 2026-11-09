/*
    Input :
        nuber of element = 5

    Output :
        5   #   4   #   3   #   2   #   1   #
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

void Pattern( int iNo)
{
    int i ;

    for ( i = iNo ; i>= 1 ; i--)
    {
        printf("%d\t#\t",i);
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