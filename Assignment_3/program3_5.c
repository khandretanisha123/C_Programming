// Accept Character and check it is vowel or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkVowel
//     Description  :    Accept Character and check it is vowel or not
//     Input        :    Character
//     Output       :    Character
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

typedef int BOOL ;
#define True 1 ;
#define False 0 ;

BOOL ChkVowel(char cAlpa)
{
    if(cAlpa == 'a' || cAlpa == 'e' || cAlpa == 'i' || cAlpa == 'o' || cAlpa == 'u')
    {
        return true ;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue  = '\0';
    BOOL bRet = false ;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet =  ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
}