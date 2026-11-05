

/*
    input :
    row = 4
    col = 5

   4    4   4   4   4
   3    3   3   3   3
   2    2   2   2   2
   1    1   1   1   1

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

void Pattern( int iRow , int iCol)
{
    int i , j , iTemp = 0 ;

    iTemp = iRow ;

    for( i=1 ; i <= iRow ; i++)
    {
        for(j=1 ; j <= iCol ; j++)
        {
            printf("%d\t",iTemp);
        }

        iTemp-- ;
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