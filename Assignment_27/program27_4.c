/*
    Accept string from user and check vowels are present or not
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkVowel
//     Description  :    Check vowels are present or not
//     Input        :    String
//     Output       :    boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
///////////////////////////////////////////////

typedef int BOOL ;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if(
            (*str == 'a')||(*str == 'e')||(*str == 'i') ||(*str == 'o') ||(*str == 'u') ||
            (*str == 'A')||(*str == 'E')||(*str == 'I') ||(*str == 'O') ||(*str == 'U')
        )
        {
            return true ;
        }

        str++;
    }

    return false ;
}
int main()
{
    char arr[20];
    BOOL bRet = false ;

    printf("Enter String :");
    scanf("%[^'\n']s",&arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contain Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS ;
}
