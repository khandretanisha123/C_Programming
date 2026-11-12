//Accept string and one character if character is present print its last index

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    LastChar (Count Charcter)
//     Description  :    check character and retrun its last character index 
//     Input        :    String and character
//     Output       :    Integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

int LastChar(char *str , char Ch)
{
    int index = 0 ;
    int iRet = -1 ;

    while (*str != '\0')
    {
        if(*str == Ch)
        {
            iRet = index ;
        }
        str++;
        index++ ;
    }

    return iRet ;
}
int main()
{
    char arr [20];
    char cValue = '\0';
    int iRet = 0 ;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    printf("Enter character:");
    scanf(  "%c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("character location :%d",iRet);

    return EXIT_SUCCESS ;
}