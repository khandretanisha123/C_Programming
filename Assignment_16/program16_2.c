
//input:
// rows = 4 col = 4

//output :

// A   B   C   D
// a   b   c   d
// A   B   C   D
// a   b   c   d

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

void Pattern(int iRows , int iCol)
{
    int i , j = 0 ;
    int cha , chA = '\0';

    for(i=1  ; i <= iRows ; i++)
    {
        for(j=1 ,cha = 'a',chA = 'A'; j <= iCol ; j ++, cha++, chA ++)
        {
            if(i % 2 == 0)
            {
               printf("%c\t",cha);
            }
            else
            {
                printf("%c\t",chA);
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