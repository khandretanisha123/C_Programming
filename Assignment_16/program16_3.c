//input:
// rows = 4 col = 4

//output :

// A   A   A   A  
// B   B   B   B
// C   C   C   C
// D   D   D   D     

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

void Pattern(int iRow , int iCol)
{
    int i,j = 0 ;
    char ch = '\0';

    for(i = 1 , ch= 'A' ; i <= iRow ; i++,ch++)
    {
        for( j = 1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
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