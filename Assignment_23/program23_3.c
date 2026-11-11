/*
    Input:
        "Marvellous Multi OS"

    Output :

        mARVELLOUS mULTI os
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    StrToggleX (String Toggle X)
//     Description  :    String convert it into lower to upper or upper to lower
//     Input        :    String 
//     Output       :    String 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

void StrToggleX(char *str)
{
    while (*str != '\0')
    {
        if( *str >='a' && *str <= 'z' )
        {
            *str = *str - 32 ;
            *str ++;
        }
        else if(*str == ' ')
        {
            *str = *str ;
            *str ++ ;
        }
        else
        {
            *str = *str +32;
            *str++;
        }
    }
    
}
int main()
{
    char arr [20];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    StrToggleX(arr);

    printf("modified string is : %s",arr);

    return EXIT_SUCCESS ;

}