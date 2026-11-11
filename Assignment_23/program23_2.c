/*
    Input :
        "Marvellous Multi OS"
    
    Output :

        MARVELLOUS MULTI OS
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    StrUprx (String Upper X)
//     Description  :    String convert it into upperCase
//     Input        :    String with Small letter
//     Output       :    String with all Upper letter
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

void StrUprX(char *str)
{
   while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            *str = *str - 32 ;
        }

        *str ++ ;
    }

}
int main()
{
    char arr [20];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    StrUprX(arr);

    printf("Modified Strng is : %s",arr);

    return EXIT_SUCCESS;
}