/*
     input :
        row = 4
        col = 4

    output :

        1   2   3   4   5
        2   3   4   5   6
        3   4   5   6   7
        4   5   6   7   8

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
//     Date         :    05/11/2026
// 
////////////////////////////////////////

void Pattern(int iRows , int iCols)
{
    int i,j ,iCount = 0 ;

    for(i = 1 ; i <= iRows ; i++)
    {
        iCount = i ;

        for(j = 1 ; j <= iCols ; j++)
        {
            printf("%d\t",iCount);
            iCount ++ ;
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Entter Rows :");
    scanf("%d",&iValue1);

    printf("Enter colums : ");
    scanf("%d",& iValue2);

    Pattern(iValue1 ,iValue2);

    return EXIT_SUCCESS ;
}