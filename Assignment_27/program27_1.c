/*
    Accept string and count capital letter
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountCapital
//     Description  :    Count capital letter in String
//     Input        :    String
//     Output       :    Count integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
///////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0 ;

    while (*str != '\0')
    {
        if(*str >= 65 && *str <=90)
        {
            iCount ++;
        }
        str++;
    }

    return iCount ;
    
}
int main()
{
    char arr[20];
    int iRet = 0 ;

    printf("Enter string :");
    scanf("%[^'\n']s",&arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS ;
}