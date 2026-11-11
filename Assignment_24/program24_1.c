#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkChar (check Character)
//     Description  :    Check charcater present in String or not
//     Input        :    String and Character
//     Output       :    True or false
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////
BOOL ChkChar(char *str , char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str ++ ;
    }
        return false ;
}

int main()
{
    char arr[20];
    char cValue ;
    BOOL bRet = false ;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    /////////////////////////////////////////////////////////////////
    //
    //  if compiler can't get the next input then fflush(stdin) is used 
    //  in this buffer is created,fflush(stdin) clear the buffer input and 
    //  takes next input 
    //
    //////////////////////////////////////////////////////////////////

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not Found");
    }

    return EXIT_SUCCESS;
}