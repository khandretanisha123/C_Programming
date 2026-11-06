/*
    input :
        row = 4
        col = 5

    output :

        a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
        1   2   3   4   5

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

void Pattern( int iRows , int iCols)
{
    int i ,j = 0 ;
    char ch = '\0';

    for(i = 1 ; i <= iRows ; i ++)
    {
        ch = 'a' ;
        for(j = 1 ; j <= iCols ; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",j);
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