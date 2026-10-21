//Accept one character and convert case of that character

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DisplayConvert
//     Description  :    Accept one character and convert case of that character
//     Input        :    Character
//     Output       :    Character
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a'&& CValue <= 'z')  
    {
        //converts it to uppercase
        printf("%c",CValue - 32);
    }
    else if (CValue >= 'A' && CValue <= 'Z')
    {
        //convert it to lowercase
        printf("%c" , CValue + 32);
    }
}

/////////////////////////////////////////
//  
//  a=97
//  A=65
//  Difference = 32 
//
////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}