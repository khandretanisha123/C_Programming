//Accept string from user and count Space in the string 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountWhite
//     Description  :    Count White spaces
//     Input        :    String 
//     Output       :    Integer 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0 ;

    while ( *str != '\0')
    {
        if(*str == ' ')
        {
            iCount ++;
        }
        *str++ ;
    }
    return iCount ;
}
int main()
{
    char arr[20];
    int iRet = 0 ;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}