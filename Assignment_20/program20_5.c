/*
    Input : 
        Rows : 4
        Cols : 4

    Output :

        1   2   3   4
        1   2       4
        1       3   4
        1   2   3   4
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
//     Date         :    08/11/2026
// 
////////////////////////////////////////

void Pattern ( int iRows , int iCols)
{
    int i, j = 0 ;

    for(i = 1 ; i <= iRows ; i++)
    {
        for( j = 1 ; j <= iCols ; j++)
        {
            if((i==1) || (j==1) || (i==iRows) || (j==iCols) || (i==j))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 , iValue2 = 0 ;

    printf("Enter number of Rows and Colums : ");
    scanf("%d %d", &iValue1 ,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}