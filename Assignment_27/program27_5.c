/*
    Accept string and print it in reverse order
*/

#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////
//      
//     Funtion name :    Reverse
//     Description  :    String reverse
//     Input        :    String
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    13/11/2026
// 
///////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Move end pointer to the last character
    while (*end != '\0')
    {
        end++;
    }
    end--;

    // Swap characters
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main ()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reverse string is :%s ",arr);

    return EXIT_SUCCESS;
}