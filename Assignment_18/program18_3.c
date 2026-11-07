/*
    Input :
        rows = 5 
        cols = 5

    Output :

        $   *   *   *   *
        *   $   *   *   *
        *   *   $   *   *
        *   *   *   $   *
        *   *   *   *   $
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
//     Date         :    06/11/2026
// 
////////////////////////////////////////

void Pattern(int iRows , int iCols)
{
    int i ,j = 0 ;

    if(iRows == iCols)
    {

        for(i = 1 ; i <= iRows ; i++)
        {
            for( j =1 ; j<= iCols ; j++)
            {
                if(i == j )
                {
                    printf("$\t");
                }
                else
                {
                    printf("*\t");
                }
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("Invalide input");
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