/*
    Accept string and print differnce of small character and capital character
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Difference
//     Description  :    differnce of small character and capital character
//     Input        :    String
//     Output       :    Count integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
///////////////////////////////////////////////

int Difference(char *str )
{
    int iCapital =0 ;
    int iSmall = 0;
    int iDiff = 0 ;

    while (*str != '\0')
    {
        if(*str >= 65 && *str <=90)
        {
            iCapital ++;
        }
        else if(*str >= 97 && *str <= 122)
        {
            iSmall++;
        }

        str++;
    }

    iDiff = iSmall - iCapital ;

    return iDiff ;
    
}
int main()
{
    char arr[20];
    int iRet = 0 ;

    printf("Enter String :");
    scanf("%[^'\n']s",&arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS ;
}