//Accept string check character and retrun its first character index 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    FirstChar (Count Charcter)
//     Description  :    check character and retrun its first character index 
//     Input        :    String and character
//     Output       :    Integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iCount;
        }

        str++;
        iCount++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cvalue = '\0';
    int iRet = 0 ;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    printf("Enter character:\n");
    scanf("%c",&cvalue);

    iRet = FirstChar(arr,cvalue);

    printf("Character Location : %d",iRet);

    return EXIT_SUCCESS;
}