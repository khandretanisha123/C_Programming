/*
    Accept string and count number of Small character

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountSmall
//     Description  :    Count Small letter in String
//     Input        :    String
//     Output       :    Count integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
///////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0 ;

    while (*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            iCount++;
        }
        str++;

    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0 ;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}