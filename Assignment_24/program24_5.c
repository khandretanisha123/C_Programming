// Accept string and reverse it 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    StrRevX (String Reverse)
//     Description  :    reverse string  
//     Input        :    String and character
//     Output       :    String
//     Author       :    Tanisha Pramod Khandre
//     Date         :    10/11/2026
// 
//////////////////////////////////////////////////

void StrRevX( char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified String : %s", arr);

    return EXIT_SUCCESS;
}