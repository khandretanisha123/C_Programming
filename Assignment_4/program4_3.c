//greater of two number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    FindGreater
//     Description  :    check number is even or odd 
//     Input        :    Integer
//     Output       :    Display greater number
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("%d is greater\n", iNo1);
    }
    else if (iNo2 > iNo1)
    {
        printf("%d is greater\n", iNo2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number 1: \n");
    scanf("%d", &iValue1);

    printf("Enter number 2: \n");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
