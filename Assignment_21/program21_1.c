/*
    Input :
        Rows : 4
        Cols : 3

    Output :

        *   *   *
        *   *   *
        *   *   *
        *   *   *

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

void Pattern(int iRows , int iCols)
{
    int i,j = 0 ;

    for(i = 1 ; i <= iRows ; i++)
    {
        for( j = 1 ; j <= iCols; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter number of rows :");
    scanf("%d",&iValue1);

    printf("Enter number of columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}