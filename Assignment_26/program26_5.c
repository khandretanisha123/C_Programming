/*
    Accept character and print its ASCII value in decimal 

    Ex : 

        A
        Dcimal      65
        octal       0101
        Hexadecimal        0X41


*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    Display ASCII value in decimal octal and hexadecimal 
//     Input        :    character
//     Output       :    Display
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
///////////////////////////////////////////////

void Display (char ch )
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : %X",ch);

}
int main ()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS ;
}