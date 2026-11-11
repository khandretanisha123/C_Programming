/*
    Input : 
        "Marvellous Multi OS"

    Output :

        marvellous multi os 

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Strlwrx (String lower X)
//     Description  :    String convert it into lowercase
//     Input        :    String with capital letter
//     Output       :    String with all Small letter
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

void Strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
            *str = *str + 32 ;
        }

        *str ++ ;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Strlwrx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;

}