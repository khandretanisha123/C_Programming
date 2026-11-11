//Accept string and check Count of Specific character 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountChar (Count Charcter)
//     Description  :    Count Character int teh string 
//     Input        :    String and character
//     Output       :    Integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

int CountChar(char *str , char ch)
{
    int iCount = 0 ;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        *str++ ;
    }
    return iCount;
}
int main()
{
    char arr[20];
    char cValue ;
    int iRet = 0 ;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    printf("Enter character :\n");
    scanf("%c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character Frequence is : %d",iRet);

    return EXIT_SUCCESS;

}