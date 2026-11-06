/*
    input :
        row = 4
        col = 5

    output :

        2   4   6   8   10
        1   3   5   7   9
        2   4   6   8   10
        1   3   5   7   9

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

void Pattern (int iRows , int iCols)
{

    int i, j;
    int iEven, iOdd;

    for(i = 1; i <= iRows; i++)
    {
        iEven = 2;
        iOdd = 1;

        for(j = 1; j <= iCols; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t", iEven);
                iEven += 2;
            }
            else
            {
                printf("%d\t", iOdd);
                iOdd += 2;
            }
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