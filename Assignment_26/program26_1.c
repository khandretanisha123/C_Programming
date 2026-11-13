/*
    Display ASCII Table  0 to 255

    Symbole     Decimal     HexaDecimal     Octal   
      
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DisplayASCII 
//     Description  :    Display ASCII table from 0 to 255
//     Input        :    --------
//     Output       :    --------
//     Author       :    Tanisha Pramod Khandre
//     Date         :    12/11/2026
// 
//////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0 ;

    printf("Symbole\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0 ; iCnt <= 255 ; iCnt++)
    {
        printf("%c\t%d\t%x\t%o\t\n",iCnt,iCnt,iCnt,iCnt);
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}