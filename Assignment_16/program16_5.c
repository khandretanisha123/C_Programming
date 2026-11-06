/*
    input :
    row = 4
    col = 4

   1    2   3   4   
   5    6   7   8   
   9    10  11  12   
   13   14  15   16   

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
    int i , j , iCount = 0 ;

    iCount = 1;

    for( i=1 ; i <= iRow ; i++)
    {
        for(j=1  ; j <= iCol ; j++)
        {
            printf("%d\t",iCount);
            iCount++ ;
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