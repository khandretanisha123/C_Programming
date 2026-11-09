/*
    Input :
        Number of element = 5

    Output :
        A   B   C   D   E

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

void Pattern( int iNo)
{
    int i;
    char Ch = '\0';

    for( i = 1 , Ch ='A' ; i <= iNo ; i++)
    {
        printf("%c\t",Ch);
        Ch++;
    }
}

int main()
{
    int iValue1 = 0 ;

    printf("Enter number of element :");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}